#include <stdio.h>

int main () {

    //declaração de variaveis
    int v, h;
    char tabuleiro [10][10];

    //inicialização de tabuleiro
    for (v = 0; v < 10; v++) {
        for (h = 0; h < 10; h++) {
        tabuleiro [v][h] = '0';                  
        } 
                   
    }

    //exibição do indice de colunas
    printf("  ");
    for (v = 0; v < 1; v++){
        for (h = 0; h < 10; h++){
            printf("%c ", h + 'A');
        }
        printf("\n");
    }

    //inicialização do barco 1 na vertical: tamanho 3
    for (v = 2; v < 5; v++){
    tabuleiro[v][2] = '3';
    }

    //inicialização do barco 2 na horizontal: tamanho 3
    for (h = 0; h < 3; h++){
    tabuleiro[0][h] = '3';
    }

    //inicialização do barco 3 na diagonal: tamanho 3
    for (v = 9, h = 9; v > 6 && h > 6; v--, h--){
    tabuleiro[v][h] = '3';
    }

    //inicialização do barco 4 na diagonal: tamanho 3
    for (v = 9, h = 0; v > 6 && h < 3; v--, h++){
    tabuleiro[v][h] = '3';
    }



    //exibição do indice de linhas e exibição das linhas
    for (v = 0; v < 10; v++){
         printf("%d ", v);
        for(h = 0; h < 10; h++){ 
            printf("%c ", tabuleiro[v][h]); 
        }
        printf("\n");              
    }

    return 0;

}
