#include <stdio.h>
#include <stdlib.h> //bibliotecas

int main()
{
    int mes; // declaração da variável
    printf ("Descubra quantos dias tem cada mes [1 a 12]\n"); // O que vai aparecer para o usuário.
    printf("Digite o numero de um mes do ano:\n");
    scanf ("%d",&mes); // leitura da varíavel

    // Meses e seus respectivos dias
    switch (mes){

    case 1:
    printf ("Janeiro tem 31 dias");
    break;

    case 2:
    printf ("Fevereiro tem 28 dias");
    break;

    case 3:
    printf ("Marco tem 31 dias");
    break;

    case 4:
    printf ("Abril tem 30 dias");
    break;

    case 5:
    printf ("Maio tem 31 dias");
    break;

    case 6:
    printf ("Junho tem 30 dias");
    break;

    case 7:
    printf ("Julho tem 31 dias");
    break;

    case 8:
    printf ("Agosto tem 31 dias");
    break;


    case 9:
    printf ("Setembro tem 30 dias");
    break;

    case 10:
    printf ("Outubro tem 31 dias");
    break;

    case 11:
    printf ("Novembro tem 30 dias");
    break;

    case 12:
    printf ("Dezembro tem 31 dias");
    break;

    default:
        printf ("Mes invalido");
    }






    return 0;
}
