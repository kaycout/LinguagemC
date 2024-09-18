#include <stdio.h>
#include "../lib/maior_menor.h"

    int main(){
        int num [7] = {15,78,6,0,48,12,4};

        printf("O maior valor do array é: %d\n" ,maior_valor(num,7));
        printf("O menor valor do array é: %d\n" ,menor_valor(num,7));
        return 0;
    }