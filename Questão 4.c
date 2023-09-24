#include <stdio.h>

int main() {
    char nivel;
    
    printf("Informe o nivel de experiencia(a, b ou c): ");
    scanf(" %c", &nivel);

    float salario, aumento, salarioAtualizado;

    printf("Informe o salario atual: ");
    scanf("%f", &salario);

    switch(nivel){
        case 'a':
            aumento = salario*0.05; break;
        case 'b':
            aumento = salario*0.07; break;
        case 'c':
            aumento = salario*0.08; break;
        default:
            printf("Nivel de experiencia invalido!\n");
            return 0;
    }

    salarioAtualizado = salario + aumento;

    printf("R$ %.2f\n", salarioAtualizado);

    return 0;
}