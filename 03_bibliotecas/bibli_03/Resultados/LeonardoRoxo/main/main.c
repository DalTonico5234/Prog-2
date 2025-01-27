#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int imprimeResultados(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    if (!(verificaDataValida(dia1, mes1, ano1)) || !(verificaDataValida(dia2, mes2, ano2)))
    {
        printf("A primeira e/ou segunda data(s) invalida(s)\n");
        return 0;
    }
    printf("Primeira data: ");
    imprimeDataExtenso(dia1, mes1, ano1);
    printf("\nSegunda data: ");
    imprimeDataExtenso(dia2, mes2, ano2);
    printf("\n");
    if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 1)
    {
        printf("A primeira data eh mais antiga\n");
    }
    else if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == -1)
    {
        printf("A segunda data eh mais antiga\n");
    }
    else if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 0)
    {
        printf("As datas sao iguais\n");
    }
    printf("A diferenca em dias entre as datas eh: %.2d dias", calculaDiferencaDias(dia1, mes1, ano1, dia2, mes2, ano2));
}

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);
    imprimeResultados(dia1, mes1, ano1, dia2, mes2, ano2);
}