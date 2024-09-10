#include <stdio.h> // biblioteca standart de Input/Output

int main()
{
    int j;                                            // declarar variável j inteira
    printf("Digite um valor inteiro eENTER\n");      // ler j e não digitar nafa entre %d e '
    scanf("%d", &j);                                // mostrar na tela valor de j lido
    printf("Valor de j e '%d\n", j);               
    
    return 0;
    
}