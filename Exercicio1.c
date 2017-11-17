#include <stdio.h>

//Define quantidade de linhas e colunas
#define LINHAS 4
#define COLUNAS 5 

int main() {

    //Declarando a matriz e os vetores
    int matrizA[LINHAS][COLUNAS];
    int vetorB[LINHAS];
    int vetorC[COLUNAS];

    //Solicita entrada ao usuário
    printf("Insira %d números inteiros", LINHAS*COLUNAS);

    //Captura todas as entradas e armazena na matriz A
    for(int i=0; i<LINHAS; i++) {
        for(int j=0; j<COLUNAS; j++) {
            printf("\nLinha %d, Coluna %d:", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    //Efetua soma das linhas no vetorB
    for(int i=0; i<LINHAS; i++) {
        int sum = 0;
        for(int j=0; j<COLUNAS; j++) 
            sum += matrizA[i][j];
        vetorB[i] = sum;
    }

    //Efetua soma das colunas no vetorC
    for(int j=0; j<COLUNAS; j++) {
        int sum = 0;
        for(int i=0; i<LINHAS; i++) 
            sum += matrizA[i][j];
        vetorC[j] = sum;
    }

    //Apresenta a soma das linhas
    printf("Soma das linhas (vetor B):\n");
    for(int i=0; i<LINHAS; i++) 
        printf("\t%d: %d\n", i+1, vetorB[i]);

    //Apresenta a soma das colunas
    printf("Soma das colunas (vetor C):\n");
    for(int j=0; j<COLUNAS; j++) 
        printf("\t%d: %d\n", j+1, vetorC[j]);
    
}
