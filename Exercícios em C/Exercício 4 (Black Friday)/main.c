#include <stdio.h> // Bibliotecas
#include <stdlib.h> // Bibliotecas

int main()
{
    int pe,cp,v1,v2,a; //Declaração de variáveis
    /* Preço de etiqueta
    Codigo de pagamento
    Valor 1
    Valor 2
    Acréscimo
    */
    do{ // Servindo como laço de repetição
    printf("\nCodigos de pagamento disponiveis para a promocao de Black Friday: ");
    printf("\nOpcao 1: A vista em dinheiro ou cheque, com 10 por cento de desconto");
    printf("\nOpcao 2: A vista com cartao de credito , com 5 por cento de desconto");
    printf("\nOpcao 3: Em 2x, preco normal de etiqueta sem juros");
    printf("\nOpcao 4: Em 3x, preco de etiqueta com acrescimo de 10 por cento\n");

    printf ("\nDigite o valor de etiqueta do produto desejado:");
    scanf ("%d",&pe); // Opções que irão aparecer para a escolha do usuário/Leitura do valor de etiqueta

    printf ("\nDigite o numero da opcao desejada:");
    scanf ("%d",&cp); // Opção que irá aparecer para o usuário/Leitura da opção escolhida

    // Opções de 1 a 4 para a escolha do usuário
    switch (cp){

    case 1:
    v1 = pe * 0.10;
    v2 = pe - v1; // Cálculo para a aplicação de 10% de desconto
    system ("cls");
    printf ("\nO produto vale: %2.d\n",v2);
    printf ("--------------------------------------------------------------------------------");
    break;

    case 2:
    v1 = pe * 0.05;
    v2 = pe - v1; // Cálculo para a aplicação de 5% de desconto
    system ("cls");
    printf ("\n O produto vale: %2.d\n",v2);
    printf ("--------------------------------------------------------------------------------");
    break;

    case 3:
    v1 = pe/2; // Cálculo para a parcela em 2x do produto
    system ("cls");
    printf ("\nO produto vale: %i e nao contem juros\n",v1);
    printf ("--------------------------------------------------------------------------------");
    break;

    case 4:
    a = pe * 0.10;  // Cálculos para a parcela em 3x do produto + o acréscimo de 10%
    v1 = pe/3;
    v2 = v1 + a;
    system ("cls");
    printf ("O produto vale: %d\n",v2);
    printf ("--------------------------------------------------------------------------------");
    break;

    default:
    system ("cls");
    printf ("\nEscolha uma opcao de 1 ate 4\n"); // Mensagem que vai aparecer para o usuário caso digite um número maior que 4 ou 0

    }
    }
    while (cp>=4);

    return 0;
}
