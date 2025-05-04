#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva #1: Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        for (int movimento1 = 0; movimento1 < 5; movimento1++) {
            for (int movimento2 = 0; movimento2 < 1; movimento2++) {
                printf("Cima, ");
            }
            printf("Direita\n");
        }
        moverBispo(casas - 1);
    }
}

// Função recursiva #2: Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva #3: Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Implementação de Movimentação do Bispo
    // É utilizado recursividade para imprimir o movimento do Bispo
    moverBispo(1);

    // Implementação de Movimentação da Torre
    // É utilizado recursividade para imprimir o movimento da Torre
    moverTorre(5);

    // Implementação de Movimentação da Rainha
    // É utilizado recursividade para imprimir o movimento da Rainha
    moverRainha(8);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Abaixo, novas variáveis utilizadas para controlar os movimentos do Cavalo em 'L'
    int cavaloExt = 2;
    int cavaloInt = 2;

    // No loop externo, a primeira iteração é pulada
    // O loop é interrompido no break
    for (int moverCavalo1 = 0; moverCavalo1 < cavaloExt; moverCavalo1++) {
        if (moverCavalo1 == 0){
            continue;
        }
        for (int moverCavalo2 = 0; moverCavalo2 < cavaloInt; moverCavalo2++) {
            printf("Cima\n");
            if(moverCavalo2 == 1) {
                break;
            }

        }
        printf("Direita\n");
    }
    printf("\n");

    return 0;
}
