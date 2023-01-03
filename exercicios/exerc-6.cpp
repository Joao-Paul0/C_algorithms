/*

6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada
posição das matrizes lidas.

*/

#include <stdio.h>
#include <locale.h>
 
int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int M1[4][4], M2[4][4], M3[4][4];
	int i,j;
	
	printf("\n::::ENTRADA DA PRIMEIRA MATRIZ::::\n");
	for (i=0; i<4; i++)
		for (j=0; j<4; j++) {
		  printf("\nM1[%d][%d]=",i,j);
		  scanf("%d",&M1[i][j]); 	
	}
	printf("\n::::ENTRADA DA SEGUNDA MATRIZ::::\n");
	for (i=0; i<4; i++)
		for (j=0; j<4; j++) {
		  printf("\nM2[%d][%d]=",i,j);
		  scanf("%d",&M2[i][j]); 	
	}
	printf("\n\n::::RESULTADO DAS COMPARAÇÕES::::\n");
	for (i=0; i<4; i++)
		for (j=0; j<4; j++) {
			if (M1[i][j]>M2[i][j]) 
			  M3[i][j]=M1[i][j];
			else M3[i][j]=M2[i][j];
		    printf("\nO maior elemento da posição [%d][%d] é: %d",i,j,M3[i][j]); 
	}
}


