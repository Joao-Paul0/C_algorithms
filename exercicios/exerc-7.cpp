/*

7. Leia uma matriz de 5 x 5 elementos. Calcule a soma dos elementos que estão
na diagonal principal.

*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
 
int main(){
setlocale(LC_ALL, "Portuguese");

int i, j,x,y, soma = 0;

int mat[5][5] = {

       10, 15, 25, 30, 31,

       35, 40, 45, 50, 32,

       55, 60, 65, 70, 33,

       75, 80, 85, 90, 34,
       
       11, 12, 13, 14, 36

   };


//printf("\nDigite valor para os elementos da matriz \n\n");
//
//for(i = 0; i < 3; i++){
//    for(j=0; j<3; j++){
//        printf("\nElemento[%d][%d] = ", i,j);
//        scanf("%d",&mat[i][j]);
//    }
//}

printf("\n");    

for(i = 0; i < 5; i++){
    for(j=0; j<5; j++){
        printf("%d  ", mat[i][j]);
        
    }
    printf("\n");

}
printf("\n");

for(i = 0; i < 5; i++){
    for(j=0; j<5; j++){
        if(i == j){
            printf("%d ", mat[i][j]);
        }
        else{
            printf(" ");
        }
        
    }
    printf("\n");

}

printf("\n");

for(i = 0; i < 5; i++){
    for(j=0; j<5; j++){
        
        if(i==j){
                soma = soma + mat[i][j];
            }
            
    }
}

printf("A soma da diagonal e: %d", soma);

              
}
