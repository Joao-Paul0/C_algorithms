/*

3. Construa um programa que preenche uma matriz 4 x 4 com o produto do valor
da linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.

*/


#include <stdio.h>

int main(){
  int mat[4][4] , i=0, j=0;

  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
        mat[i][j] = (i+1)*(j+1);
        printf("%d  ",mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
