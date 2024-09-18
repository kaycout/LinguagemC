#include <stdio.h>

int main(){
    int v1, v2, rs;

    printf("Digite o número:\n");

// O comando scanf realiza a captura do número que o usuário irá digitar. 
//Após capturar o número será alocado na variável 1.

    scanf("%d",&v1);

    printf ("Digite outro número:\n");
    scanf ("%d", &v2);

    printf ("O valor de v1 é %d e está em %p \n", v1, &v1);
    printf ("O valor de v1 é %d e está em %p \n", v2, &v2);

    rs = v1 + v2;
    printf ("O resultado da soma é %d \n" ,rs);
    printf ("O valor de rs é %d e está em %p \n" ,rs,&rs);


    return 0;
}