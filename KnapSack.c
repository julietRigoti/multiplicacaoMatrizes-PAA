#include "KnapSack.h"

void mochila(int w[], int v[], int W, int res[], int n){

    int m[n][W+1];

    int d, k;

    for(d = 0; d <= W; d++){

        m[0][d] = 0;

    }

    for(k = 1; k <= n; k++){

        m[k][0] = 0;

    }

    for(k = 1; k < n; k++){
        for(d = 1; d <= W; d++){

            m[k][d] = m[k-1][d];

            if((w[k] <= d) && (v[k] + m[k - 1][d - w[k]] > m[k][d])){

                m[k][d] = v[k] + m[k - 1][d - w[k]];

            }

        }

    }

    for(k = 0; k < n; k++){
        for(d = 0; d <= W; d++){

            printf("%d ", m[k][d]);

        }

        printf("\n");

    }

    for(k = n; k >= 1; k--){
        if(m[k][W] == m[k-1][W]){

            res[k] = 0;

        }
        else{

            res[k] = 1;
            W = W - w[k];

        }
    }

}
