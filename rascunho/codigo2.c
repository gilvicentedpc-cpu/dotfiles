
#include <stdio.h>
#include <cs50.h>

int main(void){
    int altura, linha, coluna, espaco;
     
    do{
        altura = get_int("altura");

    }
        while(altura < 1 || altura > 8);

        for (linha = 0; linha < altura; linha++){

            for (espaco = 0; espaco < (altura - linha -1); espaco++){
                printf(" ");
                 }

            for(coluna = 0; coluna <= linha; coluna++){
                printf("0");
            }
            printf("\n");
        }
}

