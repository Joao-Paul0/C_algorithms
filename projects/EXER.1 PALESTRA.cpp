#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"Portuguese");
    
    int opcao;
    
    FILE *manipulador = fopen("arquivo_carros.txt","a");
    
    do {
	
    fprintf(manipulador,"Selecione uma op��o: \n");
    fprintf(manipulador,"--------------------------------------------------\n");
    fprintf(manipulador,"|C�digo|       Palestra          | Local        | Hor�rio    |\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  1   |  Recupera��o de Desastre|  Audit�rio 1 | 9h �s 10h  |\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  2   |  Linux                  |  Audit�rio 2 |  8h �s 9h  |\n ");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  3   |  Windows Server         |  Audit�rio 3 |  13h �s 14h|\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  4   |  L�gica de Programa��o  |  Audit�rio 4 |  15h �s 17h|\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    printf("Escolha uma op��o:\n");
    scanf("%d",&opcao);
    
    switch(opcao){
    	case 1:
    		fprintf(manipulador,"Recupera�a� de Desastre\n");
    		break;
    		case 2:
    			fprintf(manipulador,"Linux\n");
    			break;
    			case 3:
    				fprintf(manipulador,"Windows Server\n");
    				break;
    				case 4:
    					fprintf(manipulador,"L�gica de Programa��o\n");
    					break;
    					case 5:
    						fprintf(manipulador,"Saindo...\n");
    						break;
	}
	printf("Caso queira sair digite 5, ou se deseja continuar digite qualquer n�mero\n");
	scanf("%d",&opcao);
    
}while(opcao!=5);
fclose(manipulador);
}
