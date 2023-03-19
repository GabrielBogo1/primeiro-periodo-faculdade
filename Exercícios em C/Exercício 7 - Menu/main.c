#include <stdio.h> // Biblioteca de dados.
#include <stdlib.h> // Biblioteca de dados.
#include <locale.h> // Biblioteca de dados de caracteres especiais.


/*7) Faça o menu do seu jogo, permitindo ao usuário escolher a opção usando o
teclado númerico.(nesse cahei melhor nao coloar a qestão encima)
*/



int main() // Inicio do Menu.

{   setlocale(LC_ALL,"Portuguese"); // Ativar caracteres especiais. ( ´ )

    int b, n; // Definicição de variáveis.

    printf("\n\t\t Bem vindo ao THE PROPHECY\n"); // Mostrar nome do jogo.
    printf("\nSelecione uma das opções abaixo:\nAperte '1' para iniciar o jogo.\nAperte '2' para colocar o nome do jogador.\nAperte '3' para ver o ranking.\nAperte '4' para ver os creditos.\nAperte '5' para sair do jogo\n"); // Mostrar na tela opções.
    scanf("%i", &b); // Salvar dados da opção escolhida.

    switch(b){ // Criar opções apartir do switch.

        case 1:  // Opção um.
        sleep(1); // Deelay.
        printf("\n\t\tO jogo está sendo iniciado...\n"); // Aparece na tela o aviso.
        break; // Final da opção um.

        case 2: // Opção dois.
        sleep(1); // Deelay.
        printf("\n\nInsira seu nome:   "); // Aparece na tela aviso.
        scanf("%i", &n);// Gambiarra para colocar o nome enquanto não sabemo usar as variaveis com palavras.
        break; // Final da opção dois.

        case 3: // Opção três.
        sleep(1); // Deelay.
        printf("\nInfelizmente nínguem jogou o game até o momento. :(\n"); // Aparecer avisos na tela.
        break; // Final da opção três.

        case 4: // Opção quatro.
        sleep(1); // Deelay.
        printf("\n\t\tCRÉDITOS\n-Samuel;\n-Gabriel;\n-Gustavo;\n-Algusto,\n"); // Aparecer na tela os créditos.
        break; // Final da opção quatro.

        case 5: // Opção cinco.
        sleep(1); // Deelay.
        printf("\nPressione qualquer botão para sair do jogo\n"); // Aparece na tela o aviso de saida.
        break; // Final da opção cinco.

        default: // Caso seja selecionada nenhuma das opções.
            printf("\nDigite um numero ate 5, amigo.\n"); // Aparece na tela o aviso.
    }


    return 0; // Final do comando.
}
