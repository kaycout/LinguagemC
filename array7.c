#include <stdio.h>

    int main(){
        char nome[]= "Kaylane";
        int i = 0;


        for(i; i <= 6; i++){
        printf("%c -> %d -> %p\n" ,nome[i], nome [i], &nome[i]);
        }
        return 0; 
    }