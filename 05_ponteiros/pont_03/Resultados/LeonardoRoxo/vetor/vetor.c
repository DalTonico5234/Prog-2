#include "vetor.h"
#include <stdio.h>

void LeDadosParaVetor(int * vet, int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d ", &vet[i]);
    }
    scanf("\n");
}

void ImprimeDadosDoVetor(int * n, int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d ", n[i]);
    }
    printf("\n");
}

/**
 * @brief Troca o valor de duas variáveis se o segundo for menor que o primeiro.
 * 
 * 
 * Obs.: Essa função tem o comportamento de encontrar o menor valor no vetor vet de tamanho tam, 
 *  se esse valor for menor do que o valor apontado por paraTrocar, realiza uma troca. 
 *  Ao final da execução, a variável apontada por paraTrocar terá o menor valor encontrado no vetor vet.
 * 
 * @param vet Ponteiro para o vetor a ser percorrido.
 * @param tam Tamanho do vetor.
 * @param paraTrocar Ponteiro para a variável que armazenará o índice do menor valor encontrado.
 */
void TrocaSeAcharMenor(int * vet, int tam, int * paraTrocar)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (vet[i] < *paraTrocar)
        {
            *paraTrocar = vet[i];
        }
    } 
}

/**
 * @brief Ordena um vetor em ordem crescente.
 * 
 * Esta função recebe como parâmetro um vetor e seu tamanho, e ordena os valores do vetor em ordem crescente.
 * 
 * @param vet Ponteiro para o vetor a ser ordenado.
 * @param tam Tamanho do vetor.
 */
void OrdeneCrescente(int * vet, int tam)
{
   bubble_sort(vet, tam);
    // int i;
    // for (i = 0; i < tam; i++)
    // {
    //     int vetCortado[tam - i];
    //     int posNoOriginal = i;
    //     int posNoAtual;
    //     for (posNoAtual = 0; posNoAtual < tam - i; posNoAtual++)
    //     {
    //         vetCortado[posNoAtual] = vet[posNoOriginal];
    //         posNoOriginal++;
    //     }
    //     TrocaSeAcharMenor(vetCortado, tam - i, &vet[i]);
    // }
}

void bubble_sort (int vet[], int n) {
    int k, j, temp;

    for (k = n - 1; k > 0; k--) {

        for (j = 0; j < k; j++) {

            if (vet[j] > vet[j + 1]) {
                temp          = vet[j];
                vet[j]     = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}
