#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2,v3,menor,maior;
    printf("Digite tres numeros:");
    scanf ("%d%d%d", &v1,&v2,&v3);

    // Maior valor

    if (v1>v2){
        if (v1>v3)
         maior = v1;
        else
         maior = v3;
    }
    else {
       if (v2>v3)
        maior = v2;
       else
        maior = v3;
    }

    // Menor valor

    if (v1<v2){
      if (v1<v3)
       menor = v1;
      else
        menor = v3;
    }

    else {
      if (v2<v3)
        menor = v2;
      else
        menor = v3;

    }
    printf ("Maior:%d\tMenor:%d\n",maior,menor);







    return 0;
}
