#include <stdio.h>

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
    
    return 0;
}
