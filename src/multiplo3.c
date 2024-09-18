#include <stdio.h>

int main(){

    //declaracao da variável de contagem de zero (0) até cem(100)
    int contar = 0;

    //declaracao da variável de conta a quantidade de números multiplos de 3
    int qtd =0;
    
    while( contar <= 100 ){
        if (contar % 3 ==0){;                               //verifica o resto
        printf("%d\n", contar);
        qtd++;
    }
    contar++;
 }
    printf("Quantidade de Multiplos de 3 é: %d\n", qtd);
    return 0;
}