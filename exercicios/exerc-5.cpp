/* 

5. Desenvolva um código em C que leia uma matriz 5 x 5. Leia também um valor
X. O programa deverá fazer uma busca desse valor na matriz e, ao final,
escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;
 
int main(){

setlocale(LC_ALL, "Portuguese");

int mat[5][5], i, j,x,y;

//srand(time(0));


printf("\nDigite valor para os elementos da matriz \n\n");

for(i = 0; i < 5; i++){
    for(j=0; j<5; j++){
        mat[i][j] = rand()%10;
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
    

i = 0;
j = 0;
int acha = 0;
int busca = 0;

printf("\nDigite o vetor que deseja buscar:  \n ");
scanf("%d",&busca);

    
for(i = 0; i < 5; i++){
    for(j=0; j<5; j++){
        if(mat[i][j] == busca){
            acha = 1;
            
            x = i;
            y = j;
        }
    }
}

if(acha == 1){
        printf("\nVetor encontrado nos indíce [%d] [%d]\n ",x,y);
    }
    
    else{
        printf("\n Vetor não encontrado \n ");
    }    
              
}
