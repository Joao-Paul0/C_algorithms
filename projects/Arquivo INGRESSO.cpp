#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
 

int main(){

setlocale(LC_ALL,"Portuguese");

int idade, resposta1, codigo, codigocadastrado = 123, rg;
char nome[20], resposta[2];


FILE *manipulador = fopen("arquivo_ingresso.txt", "a"); //criação do arquivo txt


	printf("Possui ingresso? (s/n) \n");
scanf("%s",&resposta);

 
if(strcmp(resposta,"s")==0){   //se(resposta=="s");
	
	
	
	
	printf("Digite o seu nome: \n");
	scanf("%s",&nome);
	fprintf(manipulador,"\nNome: %s",nome);
	
	printf("Quantos anos você tem? \n");
	scanf("%d",&idade);
	fprintf(manipulador,"\nIdade: %d",idade);
	
	if(idade>=18) {
		printf("Digite o código do ingresso: \n");
		scanf("%d",&codigo);
		
		if(codigo==codigocadastrado) {
			fprintf(manipulador,"\nEntrada autorizada.");
			printf("Digite o seu RG: \n");
			scanf("%d",&rg);
			fprintf(manipulador,"\nRG: %d",rg);
			
		}else{
			fprintf(manipulador,"\nEntrada proibida. Código não corresponde. \n");
		}
	}else{
		fprintf(manipulador,"\nEntrada proibida. Menor de 18 anos. \n");
	}
	

}
}

