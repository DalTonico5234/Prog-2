#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

// int main()
// {

//         int tam;
//         printf("Tamanho do vetor: \n");
//         scanf("%d", &tam);
//         int vet[tam];
//         printf("Inteiros do vetor: \n");
//         LeDadosParaVetor(vet, tam);
//         int menor = 999999;
//         TrocaSeAcharMenor(vet, tam, &menor);
//         printf("Menor número: %d\nDados do vetor: \n", menor);
//         ImprimeDadosDoVetor(vet, tam);
// }

int main(int argc, char *argv[])
{
    int casos;
    scanf("%d", &casos);

    while (casos)
    {
        int tam;
        scanf("%d", &tam);
        int vet[tam];
        LeDadosParaVetor(vet, tam);
        OrdeneCrescente(vet, tam);
        ImprimeDadosDoVetor(vet, tam);
        casos--;
    }

    return 0;
}
