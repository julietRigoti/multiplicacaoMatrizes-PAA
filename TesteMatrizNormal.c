#include <stdio.h>
#include <stdlib.h>

#include "MatrizNormal.h"
#include "load.h"
#define MAXL 512

void lerMat(FILE *f, int mat[][MAXL], int ordem){
    char buffer;
    for(int i = 0; i < ordem; i++){
        for(int j = 0; j<ordem; j++){
            fscanf(f, "%d ", &mat[i][j]);
        }
    }
    for(int linha=0; linha < ordem; linha++){
        for(int coluna=0; coluna < ordem; coluna++)
            printf("%d ", mat[linha][coluna]);
        printf("\n");
    }
    printf("\n");
}

void lerMats(FILE *f, int mat[][MAXL], int mat2[][MAXL], int ordem){
    lerMat(f, mat, ordem);
    lerMat(f, mat2, ordem);
}


void TesteMatrizNormal() {

    FILE *f = loadFile();

    int ordem;

    fscanf(f, "%d\n", &ordem);
    printf("ordem = %d\n", ordem);
    int mat[MAXL][MAXL], mat2[MAXL][MAXL];

    lerMats(f,mat, mat2, ordem);

    int matRes[MAXL][MAXL];
    Mult(mat, mat2, matRes, ordem);
}
