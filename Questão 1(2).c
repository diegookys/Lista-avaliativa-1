#include <stdio.h>

int main() {
    int ano;

    scanf("%d", &ano);

    // verifica se houve Olimpadas no ano digitado
    if ((ano >= 1896 && ano <= 2022) && (ano % 4 == 0) && !(ano >= 1939 && ano <= 1947)) {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    } else {
    // verifica se houve Copa no ano digitado
        
    if ((ano >= 1930 && ano <= 2022) && (ano == 1942 || ano == 1946 || (ano - 1930) % 4 == 0) && !(ano >= 1939 && ano <= 1946)) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    } else {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }
    }

    return 0;
}