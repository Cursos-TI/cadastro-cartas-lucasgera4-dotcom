#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    
for (int i = 0; i < 3; i++){
    for (int j = 0; j <= i; j++){
        tabuleiro[2 + i][4 - j] = 3;
        tabuleiro[2 + i][4 + j] = 3;
    }
}
   for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3 - i; j++){
        tabuleiro[4 + i][4 - j] = 3;
        tabuleiro[4 + i][4 + j] = 3;
    }
} 



    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}