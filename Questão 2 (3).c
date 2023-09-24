#include <stdio.h>

int main(){
    int N;
    int numero;
    int soma = 0;

    scanf("%d", &N);

    numero = N;

    if(N % 2 == 0){
    printf("%d eh par\n", N);
    } else {
    printf("%d eh impar\n", N);
    }

    while(numero != 0){
        
        soma += numero % 10;
        numero /= 10;
    }

    printf("A soma dos algarismos de %d eh igual a %d\n", N, soma);

    return 0;
}