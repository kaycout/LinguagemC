#include <stdio.h>
#include "../lib/produto.h"

    int main(){
        system("clear");
        Produto prod;
        printf("-----------------------------------------------------------\n");
        printf("-----------------------Caddastro do produto----------------\n");
        printf("-----------------------------------------------------------\n");

        printf("Digite o nome de produto:\n");
        fgets(prod.nome, sizeof(prod.nome), stdin);

        printf("Digite a categoria do produto:\n");
        fgets(prod.categoria, sizeof(prod.categoria), stdin);

        printf("Digite o código do produto:\n");
        scanf("%d" ,&prod.codigo);

        printf("Digite o estoque do produto:\n");
         scanf("%d" ,&prod.estoque);
       
        printf("Digite o preço do produto:\n");
        scanf("%f" ,&prod.preco);

        //exibindo o produto cadastrado
        printf("-----------------------Produto cadastrado-------------------\n");
        printf("%d - %s - %s - %d - %.2f\n" ,prod.codigo,prod.nome,prod.categoria,prod.estoque,prod.preco);

        return 0;





    }