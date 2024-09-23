#include <stdio.h>
#include "../lib/usuario.h"

    int main(){
        //declaração da estrutura Usuario como us
        Usuario us;

        //declaração do tipo file para manipular arquivos
        FILE *arq;


        //limpar a tela do terminal
        system("clear");
        printf("*****************************************\n");
        printf("******** Cadastro de usuário ************\n");
        printf("*****************************************\n");
        printf("Digite o nome de usuário:\n");
        //fgets pega o que o usuário escreveu no terminal
        fgets(us.nomeusuario, sizeof(us.nomeusuario) ,stdin);
        
        printf("Digite a senha do usuário:\n");
        fgets(us.senha,sizeof(us.senha),stdin);

        printf("Digite o nível de acesso:\n");
        fgets(us.senha,sizeof(us.senha),stdin);

        //vamos abrir o arquivo para salvar o usuário
        arq = fopen("file/usuarios.txt","a+");

        //gravar os dados no arquivo de texto
        fputs(us.nomeusuario,arq);
        fputs(us.senha,arq);

        //para retirar o arquivo da memória será usado o comando 
        //fclose
        fclose(arq);

        return 0;
    }