#include <stdio.h> 


// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0


    /*
* O tamanho do tabuleiro e dos navios é fixo (10x10).
 
* Os navios têm tamanho fixo igual a 3.
 
* As coordenadas dos navios são definidas diretamente no código, sem input do usuário.
 
* Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
 
* A validação de sobreposição de navios pode ser simplificada. 
    */


//declaração de variaveis
int coluna, linha;


//declaração da matriz
char tabuleiro[10][10]; 

//inicializar tabuleiro
for (coluna = 0; coluna < 10 ; coluna++) {
    for (linha = 0; linha < 10; linha++){
        tabuleiro [coluna][linha] = '0';
    }
}

//posição do barco horizontal, tamanho = 3

for(coluna = 3; coluna < 6; coluna++){
    tabuleiro [coluna][2] = '3';
}

//posição do barco vertical, tamanho = 3

for(linha = 5; linha < 8; linha++){
    tabuleiro [5][linha] = '3';
}

//imprimir indice de colunas
    printf("  "); //imprime um vazio para o indice de coluna se alinhar com as linhas
    for (linha = 0; linha < 10; linha++) {
        printf("%c ", 'A' + linha);
    }

printf("\n");

//imprimir indice de linhas e tabuleiro
     for (coluna = 0; coluna < 10; coluna++){
        printf("%d ", coluna);
        for (linha = 0; linha < 10; linha++){
            printf("%c ", tabuleiro [linha][coluna]);
        }
        printf("\n"); 
     } 

     printf("\n");




return 0;
    
}
