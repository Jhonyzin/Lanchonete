#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include "var.h"


int main(){

    setlocale(LC_ALL, "Portuguese");


    while(sim!=1){
        printf("Seja bem-vindo(a) a Lanchonete \n");
        printf("Deseja ver nosso cardápio? \n");
        scanf("%s", con);

        if (strcmp(con, "sim") == 0||strcmp(con, "SIM") == 0||strcmp(con, "sIM") == 0||strcmp(con, "SiM") == 0||strcmp(con, "SIm") == 0||strcmp(con, "Sim") == 0){
            system ("cls");
            sim++;
        }
        else if (strcmp(con, "nao") == 0||strcmp(con, "NAO") == 0||strcmp(con, "nAO") == 0||strcmp(con, "NaO") == 0||strcmp(con, "naO") == 0||strcmp(con, "Nao") == 0){
            printf ("\nOkay, obrigado!");
            exit(1);
        }
        else{
            printf("\n\n!!!!!RESPOSTA INVÁLIDA!!!!!\n\n");
            system("pause");
            system ("cls");
        }
    }


    while(1){
        for(i=0;i<12;i++){
            if(i==0){printf("\n\nBEBIDAS:\n");} if(i==6){printf("\nCOMIDAS:\n");}
            printf("%d. %s R$%.2f\n", i,carda[i], valores[i]);
        }
        system("pause");


    }
    return 0;
}
