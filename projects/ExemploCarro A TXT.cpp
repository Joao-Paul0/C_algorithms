#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

 

int main(){

    setlocale(LC_ALL,"Portuguese");

    int resposta;
    float valorcarro = 45000;

    FILE *manipulador = fopen("arquivo_carros.txt","a"); //abrir ou criar um arquivo txt

    printf("Ar condicionador? (1 - sim) (2 - nao)");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Ar condicionado = 1750;\n");
         fprintf(manipulador,"Ar condicionado = 1750;\n");
        valorcarro = valorcarro + 1750;     //atualiza��o da vari�vel
    }

    printf("Pintura met�lica? (1 - sim) (2 - nao)\n");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Pintura met�lica = 800;\n");
        fprintf(manipulador,"Pintura met�lica = 800;\n");
        valorcarro = valorcarro + 800;     //atualiza��o da vari�vel
    }

    printf("Vidro el�trico? (1 - sim) (2 - nao)\n");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Vidro el�trico = 1200;\n");
        fprintf(manipulador,"Vidro el�trico = 1200;\n");
        valorcarro = valorcarro + 1200;     //atualiza��o da vari�vel
    }

    printf("Dire��o hidr�ulica? (1 - sim) (2 - nao)\n");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Dire��o hidr�ulica = 2000;\n");
        fprintf(manipulador,"Dire��o hidr�ulica = 2000;\n");
        valorcarro = valorcarro + 2000;     //atualiza��o da vari�vel
    }

    fprintf(manipulador,"Pre�o total do carro: %0.2f",valorcarro);

    printf("Pre�o total do carro: %0.2f",valorcarro);

    fclose(manipulador);

}
