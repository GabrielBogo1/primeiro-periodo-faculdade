#include <stdio.h>
#include <stdlib.h>
#include <MATH.H> //Bilbiotecas (Agora com math.h para a realiza��o de c�lculos)
int main()
{
    float hipotenusa, c1, c2; // vari�veis
    printf("\nDigite o valor do cateto 1:");
    scanf ("%f", &c1);//leitura do cateto 1
    printf ("\nDigite o valor do cateto 2:");
    scanf ("%f", &c2); //leitura do cateto 2

    // C�lculos
    hipotenusa = sqrt(c1*c1 + c2 * c2);
    printf ("\nO valor da hipotenusa e %4.2f", hipotenusa);

    return 0;
}
