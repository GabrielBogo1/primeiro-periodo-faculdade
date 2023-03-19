#include <stdio.h>
#include <stdlib.h> // Bibliotecas

int main()
{
   int x,n,potencia,contador; // base, expoente, guarda as potencias parciais.
   printf ("Calculo de potencias\n");
   printf ("Digite um numero inteiro:\n");
   scanf ("%d",&x); // leitura da base
   printf ("Digite um numero inteiro nao-negativo:");
   scanf ("%d",&n); // leitura do expoente

   // inicializações
   potencia = 1;
   contador = 0;

   //cálculos
   while (contador !=n){
    potencia = potencia * x;
    contador = contador + 1;
    }
    printf ("O valor de %d elevado a %d= %d\n",x,n,potencia);


    return 0;
}
