#include <stdio.h>
#include <stdlib.h>

#include "TesteMatrizNormal.h"
#include "TesteMatrizStrassen.h"
#include "TesteKnapSack.h"
#include "Menu.h"

int main(){

    int op = 1;


    while(op){

        op = menu();

        switch (op) {
            case 1:
                TesteMatrizNormal();
                break;

            case 2:
                TesteStrassen();
                break;

            case 3:
                TesteKnapSack();
                break;

            case 0:
                break;

            default:
                printf("opcao invalida\n");
        }
    }

    return 0;
}
