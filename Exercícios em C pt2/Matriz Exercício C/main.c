#include <stdio.h>
#include <stdlib.h>

int main()
{   int matrix[25][25];
    int i, j, linha, coluna;
    printf("Digite o numero de linhas\n");
    scanf("%d",&linha);
    printf("Digite o numero de coluna\n");
    scanf("%d",&coluna);

    for(i=0;i<linha;i++){
           for(j=0;j<coluna;j++){
                if (i>j){
                    matrix[i][j]=0;
                }else
                    matrix[i][j]=1;
           }
    }


            for(i=0;i<linha;i++){
                for(j=0;j<coluna;j++){
                    printf("  %i  ", matrix [i] [j]);
                }
                printf("\n");
                }



    printf("\n");

    return 0;
}
