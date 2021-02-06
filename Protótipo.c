#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

#define N 7
#define L 9
#define C 15

main () {
	setlocale(LC_ALL,"");
	system("color f0");
	system("mode 90, 36");
	FILE *plan, *plan_res, *replan, *pontd1, *pontd2, *pontd3, *pontd4, *pontd5, *pontd6;
	int A[N][L], i, j, k, menu, pi, selec;
	char alt, dstb1[C], dstb2[C], dstb3[C], dstb4[C], dstb5[C], dstb6[C];

	plan=fopen("arq_font.txt", "r");
	pontd1=fopen("Central Foods.txt", "r");
	pontd2=fopen("Copal.txt", "r");
	pontd3=fopen("Himalaia.txt", "r");
	pontd4=fopen("Dismelo.txt", "r");
	pontd5=fopen("DuNorte.txt", "r");
	pontd6=fopen("Fribel.txt", "r");
			    
	fscanf(pontd1, "%s", &dstb1);
	fscanf(pontd2, "%s", &dstb2);
	fscanf(pontd3, "%s", &dstb3);
	fscanf(pontd4, "%s", &dstb4);
	fscanf(pontd5, "%s", &dstb5);
	fscanf(pontd6, "%s", &dstb6);

	if(plan==NULL) {
        printf("Arquivo fonte não encontrado\n\nCriando novo arquivo fonte...");
        fclose(plan);
		replan=fopen("arq_font.txt", "w");
        for(i=0;i<(N-1)*(L-1);i++) {
        	fprintf(replan, "0\n");
		}
		fclose(replan);
		plan=fopen("arq_font.txt", "r");
        system("pause>>NULL");
        system("cls");
        printf("Novo arquivo fonte criado com sucesso!\n\nEntre em 'Gerenciar distribuidoras' para altera-lo");
        system("pause>>NULL");
        system("cls");
    }
	printf("     |=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=|\n");
	printf("     |=|                                                      |=|\n");
	printf("     |=|    PRODUTOS POR DISTRIBUIDORA EM UM SUPERMERCADO     |=|\n");
	printf("     |=|                                                      |=|\n");
	printf("     |=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=||=|\n\n");

	printf("Bem vindo ao software de mapeamento e gerenciamento de produtos de\num supermercado! Este progama mostra planilhas, dados organizados\ne detalhados sobre o estoque de várias distribuidoras que atendem\no supermercado alvo.\n");


	system("pause>>NULL");

	system("cls");

	while(menu!=5) {
		printf("--------------------MENU--------------------\n");
		printf("1) Planilha geral de todas as distribuidoras\n");
		printf("2) Planilha individual \n");
		printf("3) Gerenciar distribuidoras\n");
		printf("4) Destacar distribuidoras\n");
		printf("5) Sair\n");
		printf("--------------------------------------------\n\n");

		printf("Selecione a opção: ");
		scanf("%d",&menu);

		system("cls");

		switch(menu) {
			case 1:
				for(i=0;i<N;i++) {
					for(j=0;j<L;j++) {
						if(i==0 && j==0) {
							printf(" \t\t");
						} else if(j==0) {
							switch(i) {
								case 1:
									printf("%s\t", dstb1);
									break;
								case 2:
									printf("%s\t\t", dstb2);
									break;
								case 3:
									printf("%s\t", dstb3);
									break;
								case 4:
									printf("%s\t\t", dstb4);
									break;
								case 5:
									printf("%s\t\t", dstb5);
									break;
								case 6:
									printf("%s\t\t", dstb6);
									break;
							}
						} else if(i==0) {
							switch(j) {
								case 1:
									printf("A\t");
									break;
								case 2:
									printf("Fe\t");
									break;
								case 3:
									printf("C\t");
									break;
								case 4:
									printf("B\t");
									break;
								case 5:
									printf("La\t");
									break;
								case 6:
									printf("Fr\t");
									break;
								case 7:
									printf("Le\t");
									break;
								case 8:
									printf("M\t");
									break;
							}
						} else {
							fscanf(plan, "%d", &A[i][j]);
							printf("%d\t", A[i][j]);
						}
					}
					printf("\n\n");
				}

				printf("\n\n");
				printf("Sumário:\nA - Arroz\nFe - Feijão\nC - Carne\nB - Batata\nLa - Laranja\nFr - Frango\nLe - Leite\nM - Manteiga");
				printf("\n\n");

				system("pause>>NULL");
				break;
			case 2:
				for(i=1;i<N;i++) {
					for(j=1;j<L;j++) {
						fscanf(plan, "%d", &A[i][j]);
					}
				}
				while(pi!=7) {
					printf("---------------Distribuidora---------------\n");
					printf("1) %s\n", dstb1);
					printf("2) %s\n", dstb2);
					printf("3) %s\n", dstb3);
					printf("4) %s\n", dstb4);
					printf("5) %s\n", dstb5);
					printf("6) %s\n", dstb6);
					printf("7) Voltar\n");
					printf("-------------------------------------------\n\n");
					
					printf("Selecione a opção: ");
					scanf("%d",&pi);
			
					system("cls");
					
					switch(pi) {
						case 1:
							printf("------------------------%s------------------------\n", dstb1);
							printf("A Central Foods é uma Distribuidora de Alimentos Congelados,\nRefrigerados, Linha Seca. Possui um mix de produtos e marcas\natravés de sólidas parcerias estabelecidas com os principais\nfornecedores do mercado, sempre com prazos e preços bastante\ncompetitivos.\n\n");
							printf("Planilha da distribuidora:\n\n");
							printf("Arroz: %d\n", A[pi][1]);
							printf("Feijão: %d\n", A[pi][2]);
							printf("Carne: %d\n", A[pi][3]);
							printf("Batata: %d\n", A[pi][4]);
							printf("Laranja: %d\n", A[pi][5]);
							printf("Frango: %d\n", A[pi][6]);
							printf("Leite: %d\n", A[pi][7]);
							printf("Manteiga: %d\n", A[pi][8]);
							
							printf("\n\n");
							
							printf("- Funcionários: 200\n- Quantidade total de itens: 400000\n- Venda mensal da cada produto (quantidade): 1152000\n- Área da distribuidora: 17000 m²\n- Nº de estabelecimentos que ela atende: 6000\n- Entregas por dia (em média): 800\n- Entregas por mês (em média): 18000\n");
							printf("-------------------------------------------------------------\n\n");
							system("pause>>NULL");
							break;
						case 2:
							printf("-----------------------------%s-----------------------------\n", dstb2);
							printf("Atualmente atua também no ramo de supermercado e principalmente\ncomo distribuidor atacadista de produtos alimentícios como:\ncarne de aves, carne bovina, carne suína, carnes industrializadas,\nempanados, embutidos e salsicharias, ovos produzidos por granjas\nligadas a empresa, margarinas, óleos, gorduras, etc.\n\n");
							printf("Planilha da distribuidora:\n\n");
							printf("Arroz: %d\n", A[pi][1]);
							printf("Feijão: %d\n", A[pi][2]);
							printf("Carne: %d\n", A[pi][3]);
							printf("Batata: %d\n", A[pi][4]);
							printf("Laranja: %d\n", A[pi][5]);
							printf("Frango: %d\n", A[pi][6]);
							printf("Leite: %d\n", A[pi][7]);
							printf("Manteiga: %d\n", A[pi][8]);
							
							printf("\n\n");
							
							printf("- Funcionários: 500\n- Quantidade total de itens: 1000000\n- Venda mensal da cada produto (quantidade): 5760000\n- Área da distribuidora: 40000 m²\n- Nº de estabelecimentos que ela atende: 15000\n- Entregas por dia (em média): 3000\n- Entregas por mês (em média): 90000\n");
							printf("---------------------------------------------------------------\n\n");
							system("pause>>NULL");
							break;
						case 3:
							printf("-------------------------------%s------------------------------\n", dstb3);
							printf("A Himalaia Distribuidora é especializada no mercado de food service,\natuando como parceira de seus clientes na busca de soluções para\nseus negócios, por meio da distribuição de um amplo mix de produtos\nde alimentação, bebidas, descartáveis, bazar, higiene e limpeza. \n\n");
							printf("Planilha da distribuidora:\n\n");
							printf("Arroz: %d\n", A[pi][1]);
							printf("Feijão: %d\n", A[pi][2]);
							printf("Carne: %d\n", A[pi][3]);
							printf("Batata: %d\n", A[pi][4]);
							printf("Laranja: %d\n", A[pi][5]);
							printf("Frango: %d\n", A[pi][6]);
							printf("Leite: %d\n", A[pi][7]);
							printf("Manteiga: %d\n", A[pi][8]);
							
							printf("\n\n");
							
							printf("- Funcionários: 40\n- Quantidade total de itens: 800000\n- Venda mensal da cada produto (quantidade): 960000\n- Área da distribuidora: 10000 m²\n- Nº de estabelecimentos que ela atende: 4000\n- Entregas por dia (em média): 500\n- Entregas por mês (em média): 15000\n");
							printf("---------------------------------------------------------------------\n\n");
							system("pause>>NULL");
							break;
						case 4:
							printf("-------------------------%s------------------------\n", dstb4);
							printf("Reconhecida em toda a região norte do país, com 30 anos\nde história, possui hoje a credibilidade garantida.\nParceira da Dislog, respnsável pela logística, atende\ncom qualidade, rapidez e eficiência todos os seus mais\nde 12 mil clientes.\n\n");
							printf("Planilha da distribuidora:\n\n");
							printf("Arroz: %d\n", A[pi][1]);
							printf("Feijão: %d\n", A[pi][2]);
							printf("Carne: %d\n", A[pi][3]);
							printf("Batata: %d\n", A[pi][4]);
							printf("Laranja: %d\n", A[pi][5]);
							printf("Frango: %d\n", A[pi][6]);
							printf("Leite: %d\n", A[pi][7]);
							printf("Manteiga: %d\n", A[pi][8]);
							
							printf("\n\n");
							
							printf("- Funcionários: 700\n- Quantidade total de itens: 700000\n- Venda mensal da cada produto (quantidade): 960000\n- Área da distribuidora: 16000 m²\n- Nº de estabelecimentos que ela atende: 12000\n- Entregas por dia (em média): 500\n- Entregas por mês (em média): 1500\n");
							printf("--------------------------------------------------------\n\n");
							system("pause>>NULL");
							break;
						case 5:
							printf("-----------------------------%s-----------------------------\n", dstb5);
							printf("A Dunorte Distribuidora foi fundada na cidade de Belém, em 1998.\nComeça com uma pequena estrutura em uma sala emprestada, onde se\nutilizava somente um aparelho de fax, uma linha telefônica e com\no apoio de somente um funcionário. Atuava no mercado com apenas\nduas marcas (Leite Manacá e Charque União).\n\n");
							printf("Planilha da distribuidora:\n\n");
							printf("Arroz: %d\n", A[pi][1]);
							printf("Feijão: %d\n", A[pi][2]);
							printf("Carne: %d\n", A[pi][3]);
							printf("Batata: %d\n", A[pi][4]);
							printf("Laranja: %d\n", A[pi][5]);
							printf("Frango: %d\n", A[pi][6]);
							printf("Leite: %d\n", A[pi][7]);
							printf("Manteiga: %d\n", A[pi][8]);
							
							printf("\n\n");
							
							printf("- Funcionários: 150\n- Quantidade total de itens: 600000\n- Venda mensal da cada produto (quantidade): 2304000\n- Área da distribuidora: 14400 m²\n- Nº de estabelecimentos que ela atende: 1450\n- Entregas por dia (em média): 1200\n- Entregas por mês (em média): 36000\n");
							printf("-----------------------------------------------------------------\n\n");
							system("pause>>NULL");
							break;
						case 6:
							printf("---------------------------%s---------------------------\n", dstb6);
							printf("Atuando em toda a Grande Belém e algumas cidades do interior\ndo Estado, a Fribel está localizada nos pontos de fácil\nacesso aos seus clientes. Com uma infra estrutura moderna\ne equipada com o que há de melhor, a distribuidora garante\nos melhores indicadores de produtividade na área de logística\ndo setor.\n\n");
							printf("Planilha da distribuidora:\n\n");
							printf("Arroz: %d\n", A[pi][1]);
							printf("Feijão: %d\n", A[pi][2]);
							printf("Carne: %d\n", A[pi][3]);
							printf("Batata: %d\n", A[pi][4]);
							printf("Laranja: %d\n", A[pi][5]);
							printf("Frango: %d\n", A[pi][6]);
							printf("Leite: %d\n", A[pi][7]);
							printf("Manteiga: %d\n", A[pi][8]);
							
							printf("\n\n");
							
							printf("- Funcionários: 40\n- Quantidade total de itens: 80000\n- Venda mensal da cada produto (quantidade): 96000\n- Área da distribuidora: 4000 m²\n- Nº de estabelecimentos que ela atende: 500\n- Entregas por dia (em média): 50\n- Entregas por mês (em média): 1500\n");
							printf("------------------------------------------------------------\n\n");
							system("pause>>NULL");
							break;
					}
					system("cls");
				}
				pi=0;
				break;
			case 3:
				for(i=0;i<N;i++) {
					for(j=0;j<L;j++) {
						if(i==0 && j==0) {
							printf(" \t\t");
						} else if(j==0) {
							switch(i) {
								case 1:
									printf("%s\t", dstb1);
									break;
								case 2:
									printf("%s\t\t", dstb2);
									break;
								case 3:
									printf("%s\t", dstb3);
									break;
								case 4:
									printf("%s\t\t", dstb4);
									break;
								case 5:
									printf("%s\t\t", dstb5);
									break;
								case 6:
									printf("%s\t\t", dstb6);
									break;
							}
						} else if(i==0) {
							switch(j) {
								case 1:
									printf("A\t");
									break;
								case 2:
									printf("Fe\t");
									break;
								case 3:
									printf("C\t");
									break;
								case 4:
									printf("B\t");
									break;
								case 5:
									printf("La\t");
									break;
								case 6:
									printf("Fr\t");
									break;
								case 7:
									printf("Le\t");
									break;
								case 8:
									printf("M\t");
									break;
							}
						} else {
							fscanf(plan, "%d", &A[i][j]);
							printf("%d\t", A[i][j]);
						}
					}
					printf("\n\n");
				}

				printf("\n\n");
				printf("Sumário:\nA - Arroz\nFe - Feijão\nC - Carne\nB - Batata\nLa - Laranja\nFr - Frango\nLe - Leite\nM - Manteiga");
				printf("\n\n");

				printf("Deseja alterar algum dado?\ns/n? ");
				scanf("%s", &alt);

		    	while(alt=='s'||alt=='S') {
		    		printf("Qual distribuidor deseja alterar?(1 para %s, 2 para %s,\n3 para %s, 4 para %s, 5 para %s ou 6 para %s): ", dstb1, dstb2, dstb3, dstb4, dstb5, dstb6);
		    		scanf("%d", &i);
		    		printf("Qual produto deseja alterar?(1 para A, 2 para Fe, 3 para C, 4 para B,\n5 para L, 6 para Fr, 7 para Leite ou 8 para Manteiga): ");
		    		scanf("%d", &j);
		    		printf("Digite o novo valor: ");
		    		scanf("%d", &A[i][j]);
		    		system("cls");

				    fclose(plan);
					replan=fopen("arq_font.txt", "w");
				    for(i=1;i<N;i++) {
				    	for(j=1;j<L;j++) {
				       		fprintf(replan, "%d\n", A[i][j]);
						}
					}
					fclose(replan);
		    		plan=fopen("arq_font.txt", "r");
		    		plan_res=fopen("planilha.txt", "w");

					for(i=0;i<N;i++) {
						for(j=0;j<L;j++) {
							if(i==0 && j==0) {
								printf(" \t\t");
								fprintf(plan_res, " \t\t");
							} else if(j==0) {
								switch(i) {
									case 1:
										printf("%s\t", dstb1);
										fprintf(plan_res, "%s\t", dstb1);
										break;
									case 2:
										printf("%s\t\t", dstb2);
										fprintf(plan_res, "%s\t\t", dstb2);
										break;
									case 3:
										printf("%s\t", dstb3);
										fprintf(plan_res, "%s\t", dstb3);
										break;
									case 4:
										printf("%s\t\t", dstb4);
										fprintf(plan_res, "%s\t\t", dstb4);
										break;
									case 5:
										printf("%s\t\t", dstb5);
										fprintf(plan_res, "%s\t\t", dstb5);
										break;
									case 6:
										printf("%s\t\t", dstb6);
										fprintf(plan_res, "%s\t\t", dstb6);
										break;
								}
							} else if(i==0) {
								switch(j) {
									case 1:
										printf("A\t");
										fprintf(plan_res, "A\t");
										break;
									case 2:
										printf("Fe\t");
										fprintf(plan_res, "Fe\t");
										break;
									case 3:
										printf("C\t");
										fprintf(plan_res, "C\t");
										break;
									case 4:
										printf("B\t");
										fprintf(plan_res, "B\t");
										break;
									case 5:
										printf("La\t");
										fprintf(plan_res, "La\t");
										break;
									case 6:
										printf("Fr\t");
										fprintf(plan_res, "Fr\t");
										break;
									case 7:
										printf("Le\t");
										fprintf(plan_res, "Le\t");
										break;
									case 8:
										printf("M\t");
										fprintf(plan_res, "M\t");
										break;
								}
							} else {
								fscanf(plan, "%d", &A[i][j]);
								printf("%d\t", A[i][j]);
								fprintf(plan_res, "%d\t", A[i][j]);
							}
						}
						printf("\n\n");
						fprintf(plan_res, "\n\n");
					}

					printf("\n\n");
					printf("Sumário:\nA - Arroz\nFe - Feijão\nC - Carne\nB - Batata\nLa - Laranja\nFr - Frango\nLe - Leite\nM - Manteiga");
					fprintf(plan_res, "\n\n");
					fprintf(plan_res, "Sumário:\nA - Arroz\nFe - Feijão\nC - Carne\nB - Batata\nLa - Laranja\nFr - Frango\nLe - Leite\nM - Manteiga");
					printf("\n\n");
					fclose(plan_res);
					printf("Arquivo fonte alterado com êxito\n\n");
					printf("Deseja alterar mais algum valor?\ns/n: ");
					scanf("%s", &alt);
				}
				break;
			case 4:
				while(selec!=7) {
			        printf("---------------Distribuidora---------------\n");
			        printf("1) %s\n", dstb1);
			        printf("2) %s\n", dstb2);
			        printf("3) %s\n", dstb3);
			        printf("4) %s\n", dstb4);
			        printf("5) %s\n", dstb5);
			        printf("6) %s\n", dstb6);
			        printf("7) Voltar\n");
			        printf("-------------------------------------------\n\n");
			
			        printf("Selecione a distribuidora a ser destacada/atenuada: ");
			        scanf("%d", &selec);
			
			        switch(selec) {
				        case 1:
				        	if(islower(dstb1[1])) {
				        		strupr(dstb1);
					            fclose(pontd1);
					            pontd1 = fopen("Central Foods.txt","w");
					            fprintf(pontd1, "%s", dstb1);
							} else {
					            strlwr(dstb1);
					            fclose(pontd1);
					            pontd1 = fopen("Central Foods.txt","w");
					            fprintf(pontd1, "%s", dstb1);
							}
							fclose(pontd1);
					        pontd1 = fopen("Central Foods.txt","r");
				            break;
				        case 2:
				        	if(islower(dstb2[1])) {
				        		strupr(dstb2);
					            fclose(pontd2);
					            pontd2 = fopen("Copal.txt","w");
					            fprintf(pontd2, "%s", dstb2);
							} else {
					            strlwr(dstb2);
					            fclose(pontd2);
					            pontd2 = fopen("Copal.txt","w");
					            fprintf(pontd2, "%s", dstb2);
							}
							fclose(pontd2);
					        pontd2 = fopen("Copal.txt","r");
				            break;
				        case 3:
				        	if(islower(dstb3[1])) {
				        		strupr(dstb3);
					            fclose(pontd3);
					            pontd3 = fopen("Himalaia.txt","w");
					            fprintf(pontd3, "%s", dstb3);
							} else {
					            strlwr(dstb3);
					            fclose(pontd3);
					            pontd3 = fopen("Himalaia.txt","w");
					            fprintf(pontd3, "%s", dstb3);
							}
							fclose(pontd3);
					        pontd3 = fopen("Himalaia.txt","r");
				            break;
				        case 4:
				        	if(islower(dstb4[1])) {
				        		strupr(dstb4);
					            fclose(pontd4);
					            pontd4 = fopen("Dismelo.txt","w");
					            fprintf(pontd4, "%s", dstb4);
							} else {
					            strlwr(dstb4);
					            fclose(pontd4);
					            pontd4 = fopen("Dismelo.txt","w");
					            fprintf(pontd4, "%s", dstb4);
							}
							fclose(pontd4);
					        pontd4 = fopen("Dismelo.txt","r");
				            break;
				        case 5:
				        	if(islower(dstb5[1])) {
				        		strupr(dstb5);
					            fclose(pontd5);
					            pontd5 = fopen("DuNorte.txt","w");
					            fprintf(pontd5, "%s", dstb5);
							} else {
					            strlwr(dstb5);
					            fclose(pontd5);
					            pontd5 = fopen("DuNorte.txt","w");
								fprintf(pontd5, "%s", dstb5);
							}
							fclose(pontd5);
					        pontd5 = fopen("DuNorte.txt","r");
				            break;
				        case 6:
				        	if(islower(dstb6[1])) {
				        		strupr(dstb6);
					            fclose(pontd6);
					            pontd6 = fopen("Fribel.txt","w");
								fprintf(pontd6, "%s", dstb6);
							} else {
					            strlwr(dstb6);
					            fclose(pontd6);
					            pontd6 = fopen("Fribel.txt","w");
								fprintf(pontd6, "%s", dstb6);
							}
							fclose(pontd6);
					        pontd6 = fopen("Fribel.txt","r");
				            break;
			        }
			        system("cls");
			    }
			    selec=0;
			
			    
			    break;
		}
		system("cls");
	}
	printf("Saindo...");
	
	fclose(pontd1);
	fclose(pontd2);
	fclose(pontd3);
	fclose(pontd4);
	fclose(pontd5);
	fclose(pontd6);
	fclose(plan);
	system("pause>>NULL");
}
