#include <stdio.h>

    void alterar (int *ponteiro){
        *ponteiro = 200;
    }
    
    int main(){
    
        int valor = 32;
        printf("O valor da variável é %d. O endereço é %p\n" ,valor, &valor);
        alterar(&valor);
        printf("O valor da variável é %d. O endereço é %p\n" ,valor, &valor);

        return 0;
    }