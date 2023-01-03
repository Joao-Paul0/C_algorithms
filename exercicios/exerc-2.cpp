/*

2. Desenvolva um programa em Linguagem C que declare uma matriz 7 x 7.
Preencha com 1 a diagonal principal e com 0 os demais elementos. Print na tela
ao final a matriz obtida.

*/


#include <stdio.h>

int main(){
    int matriz[7][7];
  
     //PREENCHIMENTO DA MATRIZ
    for(int linha = 0 ; linha < 7; linha++) {
        for(int coluna = 0 ; coluna < 7; coluna++) {
            if(linha == coluna) matriz[linha][coluna] = 1 ; //Diagonal principal
            else matriz[linha][coluna] = 0;
        }
     }
   
   
    //PRINT DA MATRIZ
    for(int linha = 0 ; linha < 7; linha++) {
        for(int coluna = 0 ; coluna < 7; coluna++) {
            printf("[ %d ] ", matriz[linha][coluna]);
        }
        printf("\n");
    }
  

    return 0;
}



