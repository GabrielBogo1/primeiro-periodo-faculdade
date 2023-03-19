#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,r;
    char sim;
    printf("\nCALCULADORA\n");
    do {
    printf ("\nDigite qual operacao basica voce deseja fazer: (+,-,/,*) ou pressione = para fechar o programa\n");
    scanf ("%s",&sim);


    switch (sim){

        case '+':
        printf("\nDigite um numero:");
        scanf ("%f",&num1);
        printf ("\nDigite outro numero:");
        scanf ("%f",&num2);
        r = num1 + num2;
        system ("cls");
        printf ("\nO resultado da soma eh:%4.2f\n",r);
        printf ("---------------------------------------------------------------------------------------------");
        break;


        case '-':
        printf ("\nDigite um numemro:");
        scanf ("%f",&num1);
        printf ("\nDigite outro numero:");
        scanf ("%f",&num2);
        r = num1 - num2;
        system ("cls");
        printf ("\nO resultado da subtracao eh: %4.2f\n",r);
        printf ("---------------------------------------------------------------------------------------------");
        break;

        case '/':
        printf ("\nDigite um numero:");
        scanf ("%f",&num1);
        printf ("\nDigite outro numero:");
        scanf ("%f",&num2);
        r = num1 / num2;
        system ("cls");
        printf ("\nO resultado da divisao eh: %4.2f\n",r);
        printf ("---------------------------------------------------------------------------------------------");
        break;

        case '*':
        printf ("\nDigite um numero:");
        scanf ("%f",&num1);
        printf ("\nDigite outro numero:");
        scanf ("%f",&num2);
        r = num1 * num2;
        system ("cls");
        printf ("\nO resultado da divisao eh: %4.2f\n",r);
        printf ("---------------------------------------------------------------------------------------------");
        break;

        case '=':
        printf ("Fechando o programa...");
        exit (0);

        default:
            printf ("Operacao invalida");
            break;

    }


    }while (sim = '=');











    return 0;
}
