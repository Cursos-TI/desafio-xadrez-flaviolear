#include <stdio.h>

int main()
{   // ==== Movendo o Bisbo 8 Casas para esquerda
    //=======Variável
    int rainha = 1;

    //======Estrutura de Repetição
    do {
        printf("%d, Para esquerda", rainha); //saída de movimento
        rainha++; //incremento
    } while (rainha <= 8) //condicional
    
    return 0;
}
