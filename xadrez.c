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
    



}
int main() {
   
    return 0;
}
