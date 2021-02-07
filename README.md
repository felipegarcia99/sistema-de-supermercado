# Sistema de supermercado

Esse programa é uma simulação de um software de gerenciamento de produtos por distribuidora em um supermercado. Ele apresenta informações de quantidades de produtos em distribuidoras que atendem um determinado supermercado fictício. Os dados das empresas (que são reais) foram baseados nos sites das mesmas.

O programa foi desenvolvido na linguagem C, e utiliza conceitos de manipulação de arquivos (*.txt*). A interface é baseada em terminal.

O objetivo do compartilhamento deste código é fornecer um exemplo de manipulação de arquivos e outros conceitos da linguagem C para iniciantes.

## Considerações
Embora esse não seja um grande projeto, e também contenha falta de boas práticas (por exemplo, todo o código está em um arquivo só e se faz uso recorrente de ```system("pause")```), ainda assim, é um programa funcional e bastante organizado, com menu e diversas opções e funcionalidades, inclusas modificações permanentes nos dados dos estoques dos produtos.


## Compilação
O programa usa as funções ```strupr()``` e ```strlwr()```, que não são funções C padrão (conforme [essa resposta](https://stackoverflow.com/questions/23618316/undefined-reference-to-strlwr)). Portanto, ele compilará apenas no Windows e não em Linux.


## Desenvolvedores
Esse projeto foi desenvolvido como requisito para a disciplina **Introdução à Programação**, cujo professor era **Rodrigo Lisboa**, no curso de **Engenharia da Computação**, na faculdade **CESUPA**, no ano de **2017**.

Autores: Felipe Garcia e Gabriel Melém

**1º semestre** do curso de Engenharia de Computação, **2017**.

## Screenshots

> Tela inicial

![](/screenshots/tela-inicial.png)

> Menu

![](/screenshots/menu.png)
