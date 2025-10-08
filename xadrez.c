#include <stdio.h>

// Movimento da torre (5 casas a direita)
void moverTorre(int casas){
    if (casas == 0)
    return;
printf("Direita!\n");
moverTorre(casas - 1) ;
}

// Movimento do Bispo (5 casas na diagonal Direita/Cima)
void moverBispo(int casas) {
    if (casas == 0)
    return;
printf("Direita, Cima!\n");
moverBispo(casas - 1);
}
int main() {
    int torre = 5; //Quantidade de casas que vai mover.
    int bispo = 5; //Quantidade de casas que vai mover.
    int rainha = 8; //Quantidade de casas que vai mover.
    int i; //variavel para auxiliar os loops!

    printf("--- Movimento da Torre! ---\n");
    i = 1;

    while (i <= torre){
        printf("Direita!\n");
            i++;
    }

    printf("--- Movimento do Bispo! ---\n");
    i = 1;

    do
    {
        printf("Cima, Direita!\n");
            i++;
    } while (i <= bispo);
    
    printf("--- Movimento da Rainha! ---\n");
    i = 1;

    for ( i = i; i <= 8; i++)
    {
        printf("Ësquerda!\n");
    }
    

    printf("--- Movimento do Cavalo! ---\n");

     int movimentoCompleto = 1; // Controla o movimento em "L"

    while (movimentoCompleto--) 
    {
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n"); // Imprime "Baixo" duas vezes
        }
        printf("Esquerda\n"); // Imprime "Esquerda" uma vez
    }
    return 0;
}
