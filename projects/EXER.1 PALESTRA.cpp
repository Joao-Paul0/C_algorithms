#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

int main(){

    setlocale(LC_ALL,"Portuguese");
    
    int opcao;
    
    FILE *manipulador = fopen("arquivo_carros.txt","a");
    
    do {
	
    fprintf(manipulador,"Selecione uma opção: \n");
    fprintf(manipulador,"--------------------------------------------------\n");
    fprintf(manipulador,"|Código|       Palestra          | Local        | Horário    |\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  1   |  Recuperação de Desastre|  Auditório 1 | 9h às 10h  |\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  2   |  Linux                  |  Auditório 2 |  8h às 9h  |\n ");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  3   |  Windows Server         |  Auditório 3 |  13h às 14h|\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    fprintf(manipulador,"|  4   |  Lógica de Programação  |  Auditório 4 |  15h às 17h|\n");
    fprintf(manipulador,"|------|-------------------------|--------------|------------|\n");
    printf("Escolha uma opção:\n");
    scanf("%d",&opcao);
    
    switch(opcao){
    	case 1:
    		fprintf(manipulador,"Recuperaçaõ de Desastre\n");
    		break;
    		case 2:
    			fprintf(manipulador,"Linux\n");
    			break;
    			case 3:
    				fprintf(manipulador,"Windows Server\n");
    				break;
    				case 4:
    					fprintf(manipulador,"Lógica de Programação\n");
    					break;
    					case 5:
    						fprintf(manipulador,"Saindo...\n");
    						break;
	}
	printf("Caso queira sair digite 5, ou se deseja continuar digite qualquer número\n");
	scanf("%d",&opcao);
    
}while(opcao!=5);
fclose(manipulador);
}
