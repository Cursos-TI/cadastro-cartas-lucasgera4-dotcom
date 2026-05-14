#include <stdio.h>

//Movendo o cavalo em L
void moverCavalo(int casas){
    if(casas > 0){
        printf("Cima direita\n");
        moverCavalo(casas - 1);
    }
}


    int main(){
        moverCavalo(1);
        return 0;

    }
