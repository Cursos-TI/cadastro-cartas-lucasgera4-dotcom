#include <stdio.h>

    //Movendo o bispo 5 casas para cima e direita
void moverBispo(int casas){
    if (casas > 0){
        printf("Cima direita\n");
        moverBispo(casas - 1);
    }
}


    int main(){
    moverBispo(5);
    return 0;


    }