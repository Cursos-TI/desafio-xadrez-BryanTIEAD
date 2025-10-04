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


    return 0;
}
