#include <stdio.h>
#include <stdlib.h> // Bibliotecas
#include <math.h>
int main()
{
    int h,m,s; //Vari�veis (Horas, minutos e segundos)

    printf ("\nDigite respectivamente, horas, minutos e segundos para ser feita a conversao em segundos:");
    scanf ("%d%d%d",&h,&m,&s);

    // C�lculo da convers�o
    h = 60 * 60 * h;
    m = 60 * m;

    printf ("\nO resultado em segundos e %d",h+m+s);

    return 0;
}
