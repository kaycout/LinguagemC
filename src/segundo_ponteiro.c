#include <stdio.h>

    int main(){
        int i = 0; 
        for (i; i < 10; i++){
            printf("%d -> %p\n" ,i, &i);
        }
        return 0;
    }