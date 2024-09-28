#include <stdio.h>
#include "../lib/cliente.h"
#include "../lib/cliente_cad.h"

int main() 
{
    Cliente cliente;
    
    cadastrar_cliente(&cliente);
    
    // Gravar os dados no arquivo
    FILE *arquivo = fopen("clientes.txt", "a");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    fprintf(arquivo, "%s;%s;%s;%d\n", cliente.nome, cliente.cpf, cliente.email, cliente.idade);
    fclose(arquivo);
    
    printf("Cliente cadastrado com sucesso!\n");
    
    return 0;
}