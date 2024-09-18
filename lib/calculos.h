int soma(int array[], int qtd){
    int rs = 0;
    int x;
    for(x = 0; x < qtd; x++){
        rs += array [x];
    }
    return rs;
}

int media(int array[], int qtd){
    int rs = 0;
    int x;
    for(x = 0; x < qtd; x++){
        rs += array [x];
    }
    return rs / qtd;
}

void pares(int array[], int qtd){
    int i;
    for(i = 0; i < qtd; i++){
        if(array[i] % 2 == 0){
            printf("O número %d é par\n" ,array[i]);
        }
    }
}

void valores_iguais(int array1[],int qtd1, int array2[], int qtd2){
    int i,j;
    for(i = 0; i < qtd1; i++){
        for(j = 0; j  < qtd2; j++){
            if(array1[i] == array2[j]){
                printf("Este valor %d tem nos dois arrays\n" ,array1[i]);
                break; // quando o valor encontrar os números iguais
                        //sai dor for de dentro
            }
        }
    }
}