#include <stdio.h>

int main()
{   // ==== Movendo o Bisbo 4 Casas na Diagonal Esquerda
    //=======Variável
    int bispo = 1;

    //===Estrutura de Repetição While
    while (bispo <= 5)
    {
        printf("%d, Para cima e Direita\n", bispo);//Saída de Movimento
        bispo++;//Incremento
    }
    
    return 0;
}
