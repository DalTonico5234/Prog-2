#include "matrix_utils.h"
#include <stdio.h>
#define True 1
#define False 0

void matrix_read(int rows, int cols, int matrix[rows][cols])
{
    int i, j, num;
    for (i = 1; i <= rows; i++)
    {
        for (j=1; j <= cols; j++)
        {
            if (j != cols)
            {
                scanf("%d ", &num);
            }
            else
            {
                scanf("%d%*c", &num);
            }
            matrix[i][j] = num;
        }
    }
}

void matrix_print(int rows, int cols, int matrix[rows][cols])
{
    int i, j, num;
    for (i = 1; i <= rows; i++)
    {
        printf("|");
        for (j=1; j <= cols; j++)
        {
            if (j == cols)
            {
                printf("%d", matrix[i][j]);
            }
            else
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("|\n");
    }
}


int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2)
{
    if (rows1 == rows2 && cols1 == cols2)
    {
        return True;
    }
    else 
    {
        return False;
    }
}


int possible_matrix_sub(int rows1, int cols1, int rows2, int cols2)
{
    if (rows1 == rows2 && cols1 == cols2)
    {
        return True;
    }
    else 
    {
        return False;
    }
}


int possible_matrix_multiply(int cols1, int rows2)
{
    if (cols1 == rows2)
    {
        return True;
    }
    else
    {
        return False;
    }
}


void matrix_add(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    int i, j;
    for (i = 1; i <= rows1; i++)
    {
        for (j=1; j <= cols1; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void matrix_sub(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1])
{
    int i, j;
    for (i = 1; i <= rows1; i++)
    {
        for (j=1; j <= cols1; j++)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void matrix_multiply(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2])
{
    int i_result, j_result, i, soma;
    for (i_result = 1; i_result <= rows1; i_result++);
    {
        for (j_result = 1; j_result <= cols2; j_result++)
        {
            soma = 0;
            for (i = 1; i <= rows2; i++)
            {
                soma += matrix2[i][j_result]*matrix1[i_result][i];
            }
            result[i_result][j_result] = soma;
        }
    }
}

void transpose_matrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows])
{
    int i, j;
    for (i=1; i <= cols; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            result[i][j] = matrix[j][i];
        }
    }
}

void scalar_multiply(int rows, int cols, int matrix[rows][cols], int scalar)
{
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        for (j=1; j <= cols; j++)
        {
            matrix[i][j] *= scalar;
        }
    }
}
