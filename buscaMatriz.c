#include <stdio.h>

int main() {
    int i, j, busca, achou = 0, matriz[3][3];

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Insira o elemento de: linha %i, coluna %i : ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("\033[2J\033[1;1H");
    printf("Digite uma chave de busca: ");
    scanf("%i", &busca);
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(matriz[i][j] == busca) {
                printf("Número %i encontrado na posição [%i][%i].", busca, i, j);
                achou = 1;
                break;
            }
        }
        if(achou == 1) {
        break;
        }
    }
    
    if(achou == 0) {
        printf("Número %i não encontrado.", busca);
    }

    return 0;
}