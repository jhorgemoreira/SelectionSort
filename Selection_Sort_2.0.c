#include <stdio.h>
#include <stdlib.h>

void Selection_Sort(int vetor_01[], int qtd_elementos) {

    int i, j, minimo, aux;

    for(i = 0; i < qtd_elementos - 1; i++) {

        minimo = i;

        for(j = i + 1; j < qtd_elementos; j++) {

            if(vetor_01[j] < vetor_01[minimo]) {

                minimo = j;

            }
            
        }

        aux = vetor_01[i];
        vetor_01[i] = vetor_01[minimo];
        vetor_01[minimo] = aux;

    }

    return 1;

}

int main(void) {

    int contador = 0;
    
    printf("Informe a quantidade de números do vetor: \n ");
    scanf("%d", &contador);

    int vetor_02[contador];

    for(int x = 0; x < contador; x++) {

        printf("Informe o %d do vetor: \n ", (x + 1));
        scanf("%d", &vetor_02[x]);

    }

    printf(" === VETOR DESORDENADO === \n ");

    for(int z = 0; z < contador; z++) {

        printf("[%d] ", vetor_02[z]);
        
    }

    printf("\n");
    printf("\n");

    Selection_Sort(vetor_02, contador);

    printf(" === VETOR ORDENADO === \n ");

    for(int y = 0; y < contador; y++) {

        printf("[%d] ", vetor_02[y]);

    }

    printf("\n");


}

// DATA: 26/02/2021
// CRIADO POR: JORGE LUIS MOREIRA GOMES FILHO