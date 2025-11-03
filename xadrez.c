#include <stdio.h>

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

void moverTorre(int casas) {
    
    if (casas <= 0) {
        return;
    }
    
    printf("Direita\n");

    moverTorre(casas - 1);
}

void moverBispo(int casas) {
    
    if (casas <= 0) {
        return;
    }
    
    printf("Cima, Direita\n");
    
    moverBispo(casas - 1);
}

void moverRainha(int casas) {
    
    if (casas <= 0) {
        return;
    }
    
    printf("Esquerda\n");
    
    moverRainha(casas - 1);
}












    return 0;
}
