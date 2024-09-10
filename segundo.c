#include <stdio.h> // biblioteca standard de Input/Ouput
int main()
{
    char car;                                         // declara VAR . CAR do tipo char
    printf ("Digite um caractere e ENTER\n");        // mostra na tela 
    scanf("%c", &car);                              // %c para ler ou mostrar char 1 char
    printf ("Caractere digitando e' %c\n", car);   //mostrou na tela valor de car lido
    return 0;
    // fim main
}
