#include <stdio.h> // Bibliotecas
#include <stdlib.h> // Bibliotecas

int main()
{
    int pe,cp,v1,v2,a; //Declara��o de vari�veis
    /* Pre�o de etiqueta
    Codigo de pagamento
    Valor 1
    Valor 2
    Acr�scimo
    */
    do{ // Servindo como la�o de repeti��o
    printf("\nCodigos de pagamento disponiveis para a promocao de Black Friday: ");
    printf("\nOpcao 1: A vista em dinheiro ou cheque, com 10 por cento de desconto");
    printf("\nOpcao 2: A vista com cartao de credito , com 5 por cento de desconto");
    printf("\nOpcao 3: Em 2x, preco normal de etiqueta sem juros");
    printf("\nOpcao 4: Em 3x, preco de etiqueta com acrescimo de 10 por cento\n");

    printf ("\nDigite o valor de etiqueta do produto desejado:");
    scanf ("%d",&pe); // Op��es que ir�o aparecer para a escolha do usu�rio/Leitura do valor de etiqueta

    printf ("\nDigite o numero da opcao desejada:");
    scanf ("%d",&cp); // Op��o que ir� aparecer para o usu�rio/Leitura da op��o escolhida

    // Op��es de 1 a 4 para a escolha do usu�rio
    switch (cp){

    case 1:
    v1 = pe * 0.10;
    v2 = pe - v1; // C�lculo para a aplica��o de 10% de desconto
    system ("cls");
    printf ("\nO produto vale: %2.d\n",v2);
    printf ("--------------------------------------------------------------------------------");
    break;

    case 2:
    v1 = pe * 0.05;
    v2 = pe - v1; // C�lculo para a aplica��o de 5% de desconto
    system ("cls");
    printf ("\n O produto vale: %2.d\n",v2);
    printf ("--------------------------------------------------------------------------------");
    break;

    case 3:
    v1 = pe/2; // C�lculo para a parcela em 2x do produto
    system ("cls");
    printf ("\nO produto vale: %i e nao contem juros\n",v1);
    printf ("--------------------------------------------------------------------------------");
    break;

    case 4:
    a = pe * 0.10;  // C�lculos para a parcela em 3x do produto + o acr�scimo de 10%
    v1 = pe/3;
    v2 = v1 + a;
    system ("cls");
    printf ("O produto vale: %d\n",v2);
    printf ("--------------------------------------------------------------------------------");
    break;

    default:
    system ("cls");
    printf ("\nEscolha uma opcao de 1 ate 4\n"); // Mensagem que vai aparecer para o usu�rio caso digite um n�mero maior que 4 ou 0

    }
    }
    while (cp>=4);

    return 0;
}
