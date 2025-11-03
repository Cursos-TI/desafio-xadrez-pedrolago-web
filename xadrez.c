#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

        printf("Movimento da Torre:\n");
    int casas_torre = 5;
    for(int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Bispo: 
    printf("\nMovimento do Bispo:\n");
    int casas_bispo = 5;
    int contador_bispo = 0;
    while(contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Rainha: 
    printf("\nMovimento da Rainha:\n");
    int casas_rainha = 8;
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while(contador_rainha < casas_rainha);

    // Cavalo: 
    printf("\nMovimento do Cavalo:\n");
    
    // Movimento Cavalo: 
    int casas_baixo = 2;
    int casas_esquerda = 1;
    
    for(int movimento_principal = 0; movimento_principal < casas_baixo; movimento_principal++) {
        
        printf("Baixo\n");
        
        int movimento_perpendicular = 0;
        while(movimento_perpendicular < casas_esquerda) {
            
            if(movimento_principal == casas_baixo - 1) {
                printf("Esquerda\n");
                movimento_perpendicular++;
            } else {
                
                break;
            }
        }
    }




    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
