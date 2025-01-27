#include "tDepartamento.h"
#include <stdio.h>

int main()
{
    int N;
    scanf("%d\n", &N);

    tDepartamento depts[N];

    int i = 0;
    while (i < N)
    {
        char curso1[STRING_MAX], curso2[STRING_MAX], curso3[STRING_MAX], diretor[STRING_MAX], nome[STRING_MAX];
        int m1, m2, m3;
        scanf("%[^\n]\n", nome);
        scanf("%[^\n]\n", diretor);
        scanf("%[^\n]\n", curso1);
        scanf("%[^\n]\n", curso2);
        scanf("%[^\n]\n", curso3);
        scanf("%d %d %d\n ", &m1, &m2, &m3);
        if (m1 < 0 || m2 < 0 || m3 < 0 || m1 > 10 || m2 > 10 || m3 > 10)
        {
            printf("\nDigite um departamento com médias válidas\n");
        }
        else
        {
            depts[i] = CriaDepartamento(curso1, curso2, curso3, nome, m1, m2, m3, diretor);
            i++;
        }
    }

    OrdenaDepartamentosPorMedia(depts, N);

    for (i = 0; i < N; i++)
    {
        ImprimeAtributosDepartamento(depts[i]);
    }

    return 0;
}