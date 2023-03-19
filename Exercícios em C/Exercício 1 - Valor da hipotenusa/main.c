#include <stdio.h>
#include <stdlib.h>
#include <MATH.H> //Bilbiotecas (Agora com math.h para a realização de cálculos)
int main()
{
    float hipotenusa, c1, c2; // variáveis
    printf("\nDigite o valor do cateto 1:");
    scanf ("%f", &c1);//leitura do cateto 1
    printf ("\nDigite o valor do cateto 2:");
    scanf ("%f", &c2); //leitura do cateto 2

    // Cálculos
    hipotenusa = sqrt(c1*c1 + c2 * c2);
    printf ("\nO valor da hipotenusa e %4.2f", hipotenusa);

    return 0;
}
