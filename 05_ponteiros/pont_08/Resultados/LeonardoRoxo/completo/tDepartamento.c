#include "tDepartamento.h"
#include <stdio.h>
#include <string.h>

float MediaDosCursos(tDepartamento depto)
{
    return ((float)depto.m1 + (float)depto.m2 + (float)depto.m3) / 3;
}

tDepartamento CriaDepartamento(char *curso1, char *curso2, char *curso3, char *nome, int m1, int m2, int m3, char *diretor)
{
    tDepartamento dept;
    strcpy(dept.curso1, curso1);
    strcpy(dept.curso2, curso2);
    strcpy(dept.curso3, curso3);
    strcpy(dept.nome, nome);
    strcpy(dept.diretor, diretor);
    dept.m1 = m1;
    dept.m2 = m2;
    dept.m3 = m3;
    return dept;
}

void ImprimeAtributosDepartamento(tDepartamento depto)
{
    printf("\nDepartamento: %s\n", depto.nome);
    printf("	Diretor: %s\n", depto.diretor);
    printf("	1o curso: %s\n", depto.curso1);
    printf("	Media do 1o curso: %d\n", depto.m1);
    printf("	2o curso: %s\n", depto.curso2);
    printf("	Media do 2o curso: %d\n", depto.m2);
    printf("	3o curso: %s\n", depto.curso3);
    printf("	Media do 3o curso: %d\n", depto.m3);
    printf("	Media dos cursos: %.2f\n", MediaDosCursos(depto));
}

void OrdenaDepartamentosPorMedia(tDepartamento *vetor_deptos, int num_deptos)
{
    int i, j;
    for (i = num_deptos - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (MediaDosCursos(vetor_deptos[j]) < MediaDosCursos(vetor_deptos[j + 1]))
            {
                tDepartamento temp = vetor_deptos[j];
                vetor_deptos[j] = vetor_deptos[j + 1];
                vetor_deptos[j + 1] = temp;
            }
        }
    }
}
