//
// Created by mathe on 30/11/2023.
//

#include "MatrizNormal.h"
#define MAXL 512

//Multiplicação Tradicional entre mat e mat2 alterando por referência matRes, todas de mesma ordem
void Mult(int mat[][MAXL], int mat2[][MAXL], int matRes[][MAXL], int ordem){
    int i;
    int somaprod;

    for(int linha=0; linha < ordem; linha++)
        for(int coluna=0; coluna < ordem; coluna++){
            somaprod=0;
            for(i=0; i<ordem; i++) somaprod+=mat[linha][i]*mat2[i][coluna];
            matRes[linha][coluna]=somaprod;
        }


    for(int linha=0; linha < ordem; linha++){
        for(int coluna=0; coluna < ordem; coluna++)
            printf("%d ", matRes[linha][coluna]);
        printf("\n");
    }
}
