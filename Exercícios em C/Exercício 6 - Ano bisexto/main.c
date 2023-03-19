#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    printf("Digite um ano\n");
    scanf ("%i",&ano);

    if (((ano % 400 == 0) && (ano%100!=0)) || (ano%400==0))
       printf ("E bissexto");
    else
     printf ("Nao e bissexto");

    return 0;

}

