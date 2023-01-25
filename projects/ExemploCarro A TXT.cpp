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
        valorcarro = valorcarro + 1750;     //atualização da variável
    }

    printf("Pintura metálica? (1 - sim) (2 - nao)\n");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Pintura metálica = 800;\n");
        fprintf(manipulador,"Pintura metálica = 800;\n");
        valorcarro = valorcarro + 800;     //atualização da variável
    }

    printf("Vidro elétrico? (1 - sim) (2 - nao)\n");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Vidro elétrico = 1200;\n");
        fprintf(manipulador,"Vidro elétrico = 1200;\n");
        valorcarro = valorcarro + 1200;     //atualização da variável
    }

    printf("Direção hidráulica? (1 - sim) (2 - nao)\n");
    scanf("%d",&resposta);
    if(resposta==1){
        printf("Direção hidráulica = 2000;\n");
        fprintf(manipulador,"Direção hidráulica = 2000;\n");
        valorcarro = valorcarro + 2000;     //atualização da variável
    }

    fprintf(manipulador,"Preço total do carro: %0.2f",valorcarro);

    printf("Preço total do carro: %0.2f",valorcarro);

    fclose(manipulador);

}
