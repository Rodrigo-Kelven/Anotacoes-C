// Online C compiler to run C program online
#include <stdio.h>

int main(void) {
    
    int matriz[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25},
    };
    // este for percorre a matriz duas vezes,
    // a primeira percorre a linha, onde a posicao/indice é de 0 - 4
    // a segunda percorre a coluna, onde a posicao/indice é de 0 - 4
    // quando i valer 0, esta na linha de indice 0, enquanto o for percorre a coluna da linha atual, 0
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
          printf("%d\n", matriz[i][j]);
        }
    }
    
    return 0;
}
