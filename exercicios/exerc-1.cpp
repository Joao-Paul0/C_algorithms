/*

1. Elabore um programa em C que leia uma matriz 5 x 5, conte e escreva quantos
valores maiores que 10 ela possui.

 */
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int contagem = 0;
    int matriz[5][5] = {

       10, 20, 30, 40,100,

       50, 20, 90, 10, 70,

       500, 2, 30, 50, 40,

       10, 90, 90, 90, 80,
       
       20, 60, 60, 60, 501,

   };
   
    //preenchimento da matriz
//    for(int linha=0; linha<5; linha++) {
//        for(int coluna=0; coluna<5; coluna++) {
//            printf("%dª linha, %dª coluna = ", linha+1, coluna+1);
//            scanf("%d", &matriz[linha][coluna]);
//        }
//    }
//   
     //contagem > 10
    for(int linha=0; linha<5; linha++)
        for(int coluna=0; coluna<5; coluna++)
            if(matriz[linha][coluna] > 10)
                contagem++;
 
 
    printf("\n\n Existem na matriz %d números maiores que 10.", contagem);
   
    return 0;
}
