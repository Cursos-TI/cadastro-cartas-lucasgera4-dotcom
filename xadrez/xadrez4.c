#include <stdio.h>

//Movendo torre 5 casas a direita
void moverTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}


    int main(){
    moverTorre(5);
    return 0;

    }