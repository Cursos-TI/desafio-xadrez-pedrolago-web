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

void moverBispoLoopsAninhados(int casas) {
    printf("Movimento do Bispo com Loops Aninhados:\n");
    
    for (int vertical = 0; vertical < casas; vertical++) {
        
        for (int horizontal = 0; horizontal < 1; horizontal++) {
        
            printf("Cima, Direita\n");
        }
    }
}

void moverCavaloComplexo() {
    printf("Movimento do Cavalo (Cima e Direita):\n");
    
    int casas_cima = 2;
    int casas_direita = 1;
    int movimento_completo = 0;
    
    for (int etapa = 0; etapa < casas_cima + casas_direita; etapa++) {

        int movimento_realizado = 0;
        
        int tentativas = 0;
        while (tentativas < 3 && !movimento_realizado) {
            tentativas++;

            if (etapa < casas_cima && !movimento_realizado) {
                printf("Cima\n");
                movimento_realizado = 1;
                movimento_completo++;
                continue; 
            }

            if (etapa >= casas_cima && etapa < casas_cima + casas_direita && !movimento_realizado) {
                
                if (movimento_completo >= casas_cima) {
                    printf("Direita\n");
                    movimento_realizado = 1;
                    movimento_completo++;
                    break; 
                } else {
                    
                    continue;
                }
            }
        }

        if (etapa == casas_cima - 1) {
            
            continue;
        }
    }
}

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(casas_torre);
    
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(casas_bispo);
    
    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainha(casas_rainha);
    
    printf("\n");
    moverBispoLoopsAninhados(casas_bispo);
    
    printf("\n");
    moverCavaloComplexo();

    return 0;
}
