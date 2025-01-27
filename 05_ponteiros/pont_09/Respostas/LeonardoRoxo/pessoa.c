#include "pessoa.h"
#include <stdio.h>

tPessoa CriaPessoa()
{
    tPessoa juninho;
    juninho.nome[0] = '\0';
    juninho.pai = NULL;
    juninho.mae = NULL;
    return juninho;
}

void LePessoa(tPessoa *pessoa)
{
    *pessoa = CriaPessoa();
    scanf("%[^\n]\n", pessoa->nome);
}

int VerificaSeTemPaisPessoa(tPessoa *pessoa)
{
    if (pessoa->mae != NULL || pessoa->pai != NULL)
    {
        return 1;
    }
    return 0;
}

void ImprimePessoa(tPessoa *pessoa)
{

    printf("NOME COMPLETO: %s\n", pessoa->nome);
    if (pessoa->pai == NULL)
    {
        printf("PAI: NAO INFORMADO\n");
    }
    else
    {
        printf("PAI: %s\n", pessoa->pai->nome);
    }
    if (pessoa->mae == NULL)
    {
        printf("MAE: NAO INFORMADO\n");
    }
    else
    {
        printf("MAE: %s\n", pessoa->mae->nome);
    }
}

void AssociaFamiliasGruposPessoas(tPessoa *pessoas)
{
    int iM, iP, iF;
    scanf("mae: %d, pai: %d, filho: %d\n", &iM, &iP, &iF);
    if (iM != -1)
    {
        *pessoas[iF].mae = pessoas[iM];
    }
    if (iP != -1)
    {
        *pessoas[iF].pai = pessoas[iP];
    }
}