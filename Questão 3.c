#include <stdio.h>

int main(){
    int senhaCadastrada, senhaInserida, numeroTentativas = 0;

    scanf("%d", &senhaCadastrada);
    printf("senha cadastrada: %d\n", senhaCadastrada);

    do{
        scanf("%d", &senhaInserida);

     if(senhaInserida == senhaCadastrada){
        printf("senha valida!\n"); break;
        } else {
        printf("senha invalida!\n");
        }

        numeroTentativas++;

    } while(numeroTentativas < 3);

    return 0;
}