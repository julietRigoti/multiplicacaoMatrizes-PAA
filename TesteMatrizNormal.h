#ifndef PAA_TRAB1_TESTEMATRIZNORMAL_H
#define PAA_TRAB1_TESTEMATRIZNORMAL_H

#include <stdio.h>
#include "load.h"
#define MAXL 512

void lerMat(FILE *f, int mat[][MAXL], int ordem);

void lerMats(FILE *f, int mat[][MAXL], int mat2[][MAXL], int ordem);

FILE* loadFile();

void TesteMatrizNormal();

#endif //PAA_TRAB1_TESTEMATRIZNORMAL_H
