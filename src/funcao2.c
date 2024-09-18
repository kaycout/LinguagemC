#include <stdio.h>

void mensagem();
void linha();

    int main (){

        mensagem();
        linha();

        return 0;
    }

    void mensagem(){
        printf("Olá, seja bem vindo!");
    }
    void linha(){
        int x = 1;
        printf("\n");
        for (x ; x <= 30; x++){
            printf("-");
        }
        printf("\n");
    }