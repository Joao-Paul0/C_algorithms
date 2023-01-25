#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

 

int main(){

setlocale(LC_ALL,"Portuguese");

 

int opcao, resposta;
float valor = 0;
char nome[20];
 

FILE *manipulador = fopen("arquivo_lanches.txt","a");  //abertura ou criação do arquivo txt

 do{ 
 printf("\nDeseja continuar? digite 1 pra prosseguir ou 2 pra fechar o programa: ");
 scanf("%d",&resposta);
 
 if(resposta==2){
     break;
 }
 
 printf("\nDigite o seu nome: ");
 scanf("%s",&nome);
 fprintf(manipulador,"\n########################");
 fprintf(manipulador,"\nNome do cliente: %s",nome); 
 fprintf(manipulador,"\n########################");

do{     // abertura do laço

printf("\nEscolha uma opção: \n");
scanf("%d",&opcao);

switch(opcao){

    case 100:
    	fprintf(manipulador,"\n__________________________");
        fprintf(manipulador,"\n|Cachorro quente| R$ 1,70|"); //escrever no arquivo txt
        valor = valor + 1.70;
        break;

 

    case 101:
    	fprintf(manipulador,"\n|_______________|________|");
        fprintf(manipulador,"\n|Bauru simples  | R$ 2,30|"); //escrever no arquivo txt
        valor = valor + 2.30;
        break;

    case 102:
    	fprintf(manipulador,"\n|_______________|________|");
        fprintf(manipulador,"\n|Bauru com ovo  | R$ 2,60|"); //escrever no arquivo txt
        valor = valor + 2.60;
        break;

    case 103:
    	fprintf(manipulador,"\n|_______________|________|");
        fprintf(manipulador,"\n|Hamburguer     | R$ 2,40|"); //escrever no arquivo txt
        valor = valor + 2.40;
        break;

 

    case 104:
    	fprintf(manipulador,"\n|_______________|________|");
        fprintf(manipulador,"\n|Cheeseburguer  | R$ 3,50|"); //escrever no arquivo txt
        valor = valor + 3.50;
        break;
    case 105:
    	fprintf(manipulador,"\n|_______________|________|");
        fprintf(manipulador,"\n|Refrigerante   | R$ 1,00|"); //escrever no arquivo txt
        valor = valor + 1.00;
        break;

    case 106:
        printf("Pedido fechado");
        break;
        default:
        printf("Opção inválida");
}//fechamento do switch-case
}while(opcao!=106); // fechamento do laço
fprintf(manipulador,"\n|_______________|________|");
fprintf(manipulador,"\n|Valor total:   |R$ %0.2f |",valor);

}while(resposta!=2);//fechamento do int main
}
