#include <stdio.h>
#include "lib/soma_subtracao.h"

int main(){
    int rs_soma;
    int rs_sub;
    rs_soma = soma(10,5);
    rs_sub = subtracao (10,5);
    printf("O resultado da soma é %d\n" ,rs_soma);
    printf("O resultado da subtração é %d\n" ,rs_sub);
return 0;    
}
