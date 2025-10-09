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

// Movimento da Rainha (8 casas á esquerda)
void moverRainha(int casas){
    if (casas == 0)
return;
printf("Esquerda!\n");
moverRainha(casas - 1);
}

// Movimento do cavalo (Interaçao com o usuário)
void moverCavalo() {
    int opcao;

    printf("---Movimento do Cavalo! ---\n");
    printf("Escolha a direçao:\n");
    printf("1. Duas pra cima e uma pra direita\n");
    printf("2. Duas pra cima e uma pra esquerda\n");
    printf("3. Duas pra baixo e uma pra direita \n");
    printf("4. Duas pra baixo e uma pra esquerda\n");
    printf("Opçao:\n");
    scanf("%d", &opcao);

    printf("Movimento escolhido:\n");
    
    switch (opcao) {
        case 1:
            printf("Cima, Cima, Direita!\n");
            break;
        case 2:
            printf("Cima, Cima, Esquerda!\n");
            break;
        case 3:
            printf("Baixo, Baixo, Direita!\n");
            break;
        case 4:
            printf("Baixo, Baixo, Esquerda!\n");
            break;
        default:
            printf("Opçao Inválida!\n");
    }
}
int main() {
   
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    printf("--- Movimento da Torre! ---\n");
    moverTorre(torre);

    printf("--- Movimento do Bispo! ---\n");
    moverBispo(bispo);

    printf("--- Movimento da Rainha! ---\n");
    moverRainha(rainha);

    moverCavalo();

    return 0;
}
