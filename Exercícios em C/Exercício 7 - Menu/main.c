#include <stdio.h> // Biblioteca de dados.
#include <stdlib.h> // Biblioteca de dados.
#include <locale.h> // Biblioteca de dados de caracteres especiais.


/*7) Fa�a o menu do seu jogo, permitindo ao usu�rio escolher a op��o usando o
teclado n�merico.(nesse cahei melhor nao coloar a qest�o encima)
*/



int main() // Inicio do Menu.

{   setlocale(LC_ALL,"Portuguese"); // Ativar caracteres especiais. ( � )

    int b, n; // Definici��o de vari�veis.

    printf("\n\t\t Bem vindo ao THE PROPHECY\n"); // Mostrar nome do jogo.
    printf("\nSelecione uma das op��es abaixo:\nAperte '1' para iniciar o jogo.\nAperte '2' para colocar o nome do jogador.\nAperte '3' para ver o ranking.\nAperte '4' para ver os creditos.\nAperte '5' para sair do jogo\n"); // Mostrar na tela op��es.
    scanf("%i", &b); // Salvar dados da op��o escolhida.

    switch(b){ // Criar op��es apartir do switch.

        case 1:  // Op��o um.
        sleep(1); // Deelay.
        printf("\n\t\tO jogo est� sendo iniciado...\n"); // Aparece na tela o aviso.
        break; // Final da op��o um.

        case 2: // Op��o dois.
        sleep(1); // Deelay.
        printf("\n\nInsira seu nome:   "); // Aparece na tela aviso.
        scanf("%i", &n);// Gambiarra para colocar o nome enquanto n�o sabemo usar as variaveis com palavras.
        break; // Final da op��o dois.

        case 3: // Op��o tr�s.
        sleep(1); // Deelay.
        printf("\nInfelizmente n�nguem jogou o game at� o momento. :(\n"); // Aparecer avisos na tela.
        break; // Final da op��o tr�s.

        case 4: // Op��o quatro.
        sleep(1); // Deelay.
        printf("\n\t\tCR�DITOS\n-Samuel;\n-Gabriel;\n-Gustavo;\n-Algusto,\n"); // Aparecer na tela os cr�ditos.
        break; // Final da op��o quatro.

        case 5: // Op��o cinco.
        sleep(1); // Deelay.
        printf("\nPressione qualquer bot�o para sair do jogo\n"); // Aparece na tela o aviso de saida.
        break; // Final da op��o cinco.

        default: // Caso seja selecionada nenhuma das op��es.
            printf("\nDigite um numero ate 5, amigo.\n"); // Aparece na tela o aviso.
    }


    return 0; // Final do comando.
}
