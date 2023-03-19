#include <stdio.h>
#include <stdlib.h>// Bibliotecas

int main()
{
    int n;// nome da variavel

    printf("Digite um numero de 1 a 10:");// informações que vão aparecer na tela
    scanf ("%i",&n);// ler numero digitado pelo usuário

     for (int i=1; i<=10;i++){ // declaração da variável I
      printf ("%i X %i = %i\n",n,i,n*i);// cálculos/ ordem dos cálculos

     }


    return 0;
}
