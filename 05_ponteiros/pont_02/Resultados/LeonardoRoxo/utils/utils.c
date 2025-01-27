#include "utils.h"

void LeIntervalo(int * m, int * n)
{
    scanf("%d %d\n", m, n );
}

int EhPrimo(int n)
{
    if (n != 2 && !(n%2))
    {
        return 0;
    }
    int i;
    for (i = 3; i <= n/2; i+= 2)
    {
        if (!(n%i))
        {
            return 0;
        }
    }
    return 1;
}

/**
 * @brief Obtém o maior e o menor número primo em um intervalo.
 * 
 * Esta função recebe como parâmetro dois números inteiros que representam o início e o fim de um intervalo, e dois ponteiros para inteiros que receberão os valores do maior e do menor número primo encontrado no intervalo.
 * 
 * @param m Início do intervalo.
 * @param n Fim do intervalo.
 * @param menor Ponteiro para a variável que receberá o menor número primo encontrado.
 * @param maior Ponteiro para a variável que receberá o maior número primo encontrado.
 */
void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior)
{
    int i;
    int primeiro = 1;
    for (i=m; i<= n; i++)
    {
        if (EhPrimo(i) && primeiro)
        {
            *menor = i;
            *maior = i;
            primeiro = 0;
        }
        else if (EhPrimo(i))
        {
            *maior = i;
        }
    }
}