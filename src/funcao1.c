#include <stdio.h>

void parimpar(int vlr){
    if(vlr % 2 == 0){
        printf("O valor é par\n");
    }
    else{
        printf("O valor é impar\n");
    }
}

int main (){
    int vlr = 6;
    parimpar(vlr); 
    return 0;
}