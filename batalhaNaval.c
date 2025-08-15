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

    //habilidade 01 - cone
   int dv = 7; // direção vertical
   int dh = 0; // direção horizontal
    for (v = 0; v < 3; v++) {
        for (h = 5 - v; h <= 5 + v; h++){                   
            tabuleiro[v + dv][h + dh] = '5';
        }   
    }


    //habilidade 02 - cruz  
    int cv = 1; // centro vertical
    int ch = 7; // centro horizontal

    for (v = -1; v <= 1; v++) {         
    tabuleiro[cv + v][ch] = '5'; // braço vertical
    }

    for (h = -2; h <= 2; h++) {        
    tabuleiro[cv][ch + h] = '5'; // braço horizontal
    }



    //habilidade 03 - octaedro  
    int ov = 4; // centro vertical
    int oh = 5; // centro horizontal

    for (v = -1; v <= 1; v++) {
        for (h = -1; h <= 1; h++) {           
            tabuleiro[ov + v][oh + h] = '5';
        }
    }



    //exibição do indice de linhas e exibição das linhas
    for (v = 0; v < 10; v++){
         printf("%d ", v);
        for(h = 0; h < 10; h++){ 
            printf("%c ", tabuleiro[v][h]); 
        }
        printf("\n");              
}

printf("\n\n");

char cone[5][5];

// Inicializa matriz cone
for (int v = 0; v < 5; v++) {
    for (int h = 0; h < 5; h++) {
        cone[v][h] = '0';
    }
}

// Desenha cone com vértice em (0,2)
for (int v = 0; v < 3; v++) {
    for (int h = 2 - v; h <= 2 + v; h++) {
        cone[v][h] = '1';
    }
}

// Exibe matriz
printf("Cone:\n");
for (int v = 0; v < 5; v++) {
    for (int h = 0; h < 5; h++) {
        printf("%c ", cone[v][h]);
    }
    printf("\n");
}

printf("\n\n");

    // Inicializa cruz
    int cruz[5][5];
    for (int v = 0; v < 5; v++) {
        for (int h = 0; h < 5; h++) {
           cruz[v][h] = '0';
    }
}

    // Desenha cruz com centro em (2,2)
    for (int i = -1; i <= 1; i++) {
       cruz[2 + i][2] = '1'; // vertical
}
    for (int i = -2; i <= 2; i++) {
        cruz[2][2 + i] = '1'; // horizontal
}

// Exibe matriz
printf("Cruz:\n");
for (int v = 0; v < 5; v++) {
    for (int h = 0; h < 5; h++) {
        printf("%c ", cruz[v][h]);
    }
    printf("\n");
}

printf("\n\n");

char octaedro[5][5];

// Inicializa octaedro
for (int v = 0; v < 5; v++) {
    for (int h = 0; h < 5; h++) {
        octaedro[v][h] = '0';
    }
}

// Desenha octaedro com centro em (2,2)
for (int dv = -1; dv <= 1; dv++) {
    for (int dh = -1; dh <= 1; dh++) {
        if (abs(dv) + abs(dh) <= 1) {
            octaedro[2 + dv][2 + dh] = '1';
        }
    }
}

// Exibe matriz
printf("Octaedro:\n");
for (int v = 0; v < 5; v++) {
    for (int h = 0; h < 5; h++) {
        printf("%c ", octaedro[v][h]);
    }
    printf("\n");
}

printf("\n");

    return 0;

}
