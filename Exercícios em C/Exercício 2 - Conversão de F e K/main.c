#include <stdio.h>
#include <stdlib.h> // Bibliotecas
#include <math.h>
int main()
{
    // Convers�o em F
    float c,f,k;
    printf("\nDigite um numero para efetuar a conversao de Celsius para Fahrenheit:");
    scanf ("%f",&c);

    // C�lculos de C para F
    f = c * 1.8 + 32;
    printf  ("\nF = %4.2f Graus",f);
    printf ("\n-----------------------------------------------------------------------"); // Linha para separar

    // Convers�o em K
    printf ("\nDigite um numero para efetuar a conversao de Celsius para Kelvin:");
    scanf ("%f", &c);

    // C�lculos de C para K
    k = c + 273.15;
    printf ("\nK = %4.2f Graus",k);
    printf ("\n-----------------------------------------------------------------------");// Linha para separar


    return 0;
}
