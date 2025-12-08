#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças 
    printf("Desafio Jogo de Xadrez\n");
    
    // Implementação de Movimentação do Bispo
    int casaBispo = 7;
    int contadorBispo = 0;
    printf("Movimento do Bispo\n");

    while (contadorBispo < casaBispo)
    {
        printf("CimaEsquerda\n");
        contadorBispo++;
    }
    printf("\n"); 

    // Implementação de Movimentação da Torre
    int casaTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casaTorre; i++){
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    int casaRainha = 4;
    int contadorRainha = 0;
    printf("Movimento da Rainha\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casaBispo);
    
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
