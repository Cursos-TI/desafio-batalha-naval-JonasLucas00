#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int tabuleiro[10][10] = {0};
    int barco[3][3] = {3};

    int ataqueAcerto[3][3] = {1};
    int ataqueErro[3][3] = {2};

    printf("    ");
    for(char letra = 'A'; letra <= 'J'; letra++){
        printf(" %c ", letra);
    }
    printf("\n");

    for(int n = 4; n < 5; n++){ // navio horizontal
        for(int c = 2; c < 5; c++){
            tabuleiro [n][c] = barco[0][0];
        }
    }

    for(int n = 6; n < 9; n++){ // n = linha || Navio vertical
        for(int c = 5; c < 6; c++){ //c = coluna
            tabuleiro [n][c] = barco[0][0];
        }
    }

    for(int n = 0; n < 3; n++){ // navio Diagonal // linha// 00 11 22, como a posição [][] precisser igual, basta 1 loop.
        tabuleiro [n][n] = barco[0][0]; // 00 11 22
    }

    for(int n = 0, c = 8; n < 3; n++){ //Navio Diagonal
        tabuleiro [n][c] = barco[0][0];
        c--;
    }

    
    for(int n = 7; n < 10; n++){// ataque CONE, ocupa 3 linhas, qnt de coluna usadas 1, 3, 5 || 

        if(n == 7){
            for(int c = 2; c < 3; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
        if(n == 8){
            for(int c = 1; c < 4; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
        if(n == 9){
            for(int c = 0; c < 5; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
    }

    for(int n = 5; n < 8; n++){// Ataque CRUZ, ocupa 3 linhas || incio 47 556789 6

        if(n == 5){
            for(int c = 7; c < 8; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
        if(n == 6){
            for(int c = 5; c < 10; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
        if(n == 7){
            for(int c = 7; c < 8; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
    }

    for(int n = 0; n < 3; n++){// Ataque octaedro, ocupa 3 linhas || incio 04 1345 24

        if(n == 0){
            for(int c = 4; c < 5; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
        if(n == 1){
            for(int c = 3; c < 6; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
        if(n == 2){
            for(int c = 4; c < 5; c++){//coluna
                if(tabuleiro[n][c] == 3){
                    tabuleiro [n][c] = ataqueAcerto[0][0];
                }else{
                    tabuleiro [n][c] = ataqueErro[0][0];
                }
            }
        }
    }

    for(int n = 0; n < 10; n++){
        printf("%2d", n + 1);
        for(int c = 0; c < 10; c++){
            printf(" %d ", tabuleiro[n][c]);
        }
        printf("\n");
    }
}

    return 0;
}
/*EXPLICAÇAO DA LOGICA DO CODIGO

Definição da matriz 'tabuleiro', onde será fetia toda a visualização da logica do codigo
Definição da matriz dos barcos e matriz de ataque (acerto e erro);
Primeira parte do codigo fica definido o posicionamento dos barcos, vertical, horizontal e diagonal
Segunda parte é definido a logica dos ataques, e a consequência de um ataque acertar em um dos barcos
Ao acertar um ataque, o valor da posição do barco é alterado para 1 (acerto)
Um ataque que não teve acerto, o valor do barco permanece igual (3) e o valor do ataque também (2)

*/

