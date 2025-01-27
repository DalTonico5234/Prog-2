#include "data.h"
#include <stdio.h>

void InicializaDataParam(int dia, int mes, int ano, tData *data)
{
    data->ano = ano;
    data->mes = mes;
    data->dia = dia;
    if (mes > 12)
    {
        data->mes = 12;
    }
    else if (mes < 1)
    {
        data->mes = 1;
    }
    if (dia > InformaQtdDiasNoMes(data))
    {
        data->dia = InformaQtdDiasNoMes(data);
    }
    else if (dia < 1)
    {
        data->dia = 1;
    }
}

void LeData(tData *data)
{
    int dia, mes, ano;
    scanf("%d %d %d\n", &dia, &mes, &ano);
    InicializaDataParam(dia, mes, ano, data);
}

void ImprimeData(tData *data)
{
    printf("'%.2d/%.2d/%d'", data->dia, data->mes, data->ano);
}

int EhBissexto(tData *data)
{
    if ((data->ano % 4 == 0 && data->ano % 100 != 0) || (data->ano % 400 == 0))
    {
        return 1;
    }
    return 0;
}

int InformaQtdDiasNoMes(tData *data)
{
    if (data->mes == 1)
    {
        return 31;
    }
    else if (data->mes == 2 && !(EhBissexto(data)))
    {
        return 28;
    }
    else if (data->mes == 2)
    {
        return 29;
    }
    else if (data->mes == 3)
    {
        return 31;
    }
    else if (data->mes == 4)
    {
        return 30;
    }
    else if (data->mes == 5)
    {
        return 31;
    }
    else if (data->mes == 6)
    {
        return 30;
    }
    else if (data->mes == 7)
    {
        return 31;
    }
    else if (data->mes == 8)
    {
        return 31;
    }
    else if (data->mes == 9)
    {
        return 30;
    }
    else if (data->mes == 10)
    {
        return 31;
    }
    else if (data->mes == 11)
    {
        return 30;
    }
    else if (data->mes == 12)
    {
        return 31;
    }
}

/**
 * @brief Avança uma data para o dia seguinte.
 *
 * Esta função recebe como parâmetro uma estrutura tData e avança a data correspondente para o dia seguinte.
 *
 * @param data Ponteiro para a estrutura tData que será avançada.
 */
void AvancaParaDiaSeguinte(tData *data)
{
    int diasNoMes = InformaQtdDiasNoMes(data);
    if (data->dia < diasNoMes)
    {
        data->dia++;
    }
    else if (data->dia == diasNoMes && data->mes < 12)
    {
        data->mes++;
        data->dia = 1;
    }
    else if (data->dia == diasNoMes && data->mes == 12)
    {
        data->dia = 1;
        data->mes = 1;
        data->ano++;
    }
}

int EhIgual(tData *data1, tData *data2)
{
    if (data1->ano == data2->ano && data1->mes == data2->mes && data1->dia == data2->dia)
    {
        return 1;
    }
    return 0;
}