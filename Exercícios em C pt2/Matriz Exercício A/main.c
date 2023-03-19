#include <stdio.h>
#include <stdlib.h>

int main()
{   int matrix[25][25];
    int i, j, linha, coluna;
    printf("Digite o numero de linhas\n");
    scanf("%d",&linha);
    printf("Digite o numero de coluna\n");
    scanf("%d",&coluna);

    for(i=1;i<linha;i++){
           for(j=1;j<coluna;j++){
                if (i==j){
                    matrix[i][j]=1;
                }else
                    matrix[i][j]=0;
           }
    }


            for(i=1;i<linha;i++){
                for(j=1;j<coluna;j++){
                    printf("  %i, %i " , i,j);
                }
                printf("\n");
                }

    return 0;
}
