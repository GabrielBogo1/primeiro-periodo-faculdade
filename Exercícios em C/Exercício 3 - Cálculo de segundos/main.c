#include <stdio.h>
#include <stdlib.h> // Bibliotecas
#include <math.h>
int main()
{
    int h,m,s; //Variáveis (Horas, minutos e segundos)

    printf ("\nDigite respectivamente, horas, minutos e segundos para ser feita a conversao em segundos:");
    scanf ("%d%d%d",&h,&m,&s);

    // Cálculo da conversão
    h = 60 * 60 * h;
    m = 60 * m;

    printf ("\nO resultado em segundos e %d",h+m+s);

    return 0;
}
