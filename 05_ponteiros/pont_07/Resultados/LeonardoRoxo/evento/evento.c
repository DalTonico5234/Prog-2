#include "evento.h"
#include <stdio.h>

void cadastrarEvento(Evento *eventos, int *numEventos)
{
    Evento evento;
    scanf("%[^\n]\n\n", evento.nome);
    scanf("%d %d %d\n", &evento.dia, &evento.mes, &evento.ano);
    eventos[*numEventos] = evento;
    *numEventos++;
    printf("Evento cadastrado com sucesso!\n");
}

void exibirEventos(Evento *eventos, int *numEventos)
{
    printf("Eventos cadastrados:\n");

    int i;
    for (i = 0; i <= *numEventos; i++)
    {
        printf("%d - %s - %d/%d/%d\n", i, eventos[i].nome, eventos[i].dia, eventos[i].mes, eventos[i].ano);
    }
}

void trocarDataEvento(Evento *eventos, int *numEventos)
{
    int pos;
    scanf("%d\n", &pos);
    if (pos > *numEventos)
    {
        printf("Indices invalidos!\n");
    }
    else
    {
        scanf("%d %d %d\n", &eventos[pos].dia, &eventos[pos].mes, &eventos[pos].ano);
        printf("Data modificada com sucesso!\n");
    }
}

/**
 * Troca a posição de dois eventos, a partir do índice, dentro do array de eventos.
 *
 * @param eventos Array de eventos onde a troca será realizada.
 * @param indiceA Ponteiro para o primeiro índice.
 * @param indiceB Ponteiro para o segundo índice.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarIndicesEventos(Evento *eventos, int *indiceA, int *indiceB, int *numEventos)
{
    if (*indiceA > *numEventos || *indiceB > *numEventos)
    {
        printf("Indices invalidos!\n");
    }
    else
    {
        Evento temp;
        temp = eventos[*indiceA];
        eventos[*indiceA] = eventos[*indiceB];
        eventos[*indiceB] = temp;
    }
}
