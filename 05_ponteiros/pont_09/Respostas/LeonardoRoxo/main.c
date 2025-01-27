#include "pessoa.h"
#include <stdio.h>

void LePessoas(tPessoa *tropa, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        LePessoa(&tropa[i]);
    }
}

void AssociaPessoas(tPessoa *tropa, int M)
{
    int i;
    for (i = 0; i < M; i++)
    {
        AssociaFamiliasGruposPessoas(tropa);
    }
}

void ImprimePessoas(tPessoa *tropa, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (VerificaSeTemPaisPessoa(&tropa[i]))
        {
            ImprimePessoa(&tropa[i]);
        }
    }
}

int main()
{
    int N, M;
    scanf("%d\n", &N);
    tPessoa tropa[N];
    LePessoas(tropa, N);
    scanf("%d\n", &M);
    AssociaPessoas(tropa, M);
    ImprimePessoas(tropa, N);
}