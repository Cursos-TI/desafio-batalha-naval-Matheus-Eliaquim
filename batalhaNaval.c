#include <stdio.h> 

int main () {

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
