#include <stdio.h>
#include <stdlib.h>// Bibliotecas

int main()
{
    int n;// nome da variavel

    printf("Digite um numero de 1 a 10:");// informa��es que v�o aparecer na tela
    scanf ("%i",&n);// ler numero digitado pelo usu�rio

     for (int i=1; i<=10;i++){ // declara��o da vari�vel I
      printf ("%i X %i = %i\n",n,i,n*i);// c�lculos/ ordem dos c�lculos

     }


    return 0;
}
