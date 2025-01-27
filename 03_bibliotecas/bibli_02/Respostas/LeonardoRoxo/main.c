#include <stdio.h>
#include  "matrix_utils.h"

void copia_matrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols])
{
    int i, j;
    for (i=1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            matrix2[i][j] = matrix1[i][j];
        }
    }
}

void printa_menu()
{
    printf("1 - Somar matrizes\n");
    printf("2 - Subtrair matrizes\n");
    printf("3 - Multiplicar matrizes\n");
    printf("4 - Multiplicacao de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida: \n");
}

int menu(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows1][cols2])
{
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 6)
    {
        return 1;
    }
    else if(opcao == 5)
    {
        int result1[cols1][rows1], result2[cols2][rows2];
        
        transpose_matrix(rows1, cols1, matrix1, result1);
        matrix_print(cols1, rows1, result1);
        
        printf("/n");

        transpose_matrix(rows2, cols2, matrix2, result2);
        matrix_print(cols2, rows2, result2);

    }
    else if(opcao == 4)
    {
        int scalar, num_matrix;
        scanf("%d %d\n", &scalar, &num_matrix);
        if (num_matrix == 1)
        {
            int result[rows1][cols1], i, j;
            copia_matrix(rows1, cols1, matrix1, result);
            scalar_multiply(rows1, cols1, result, scalar);
            matrix_print(rows1, cols1, result);
        }
        else if (num_matrix == 2)
        {
            int result[rows2][cols2], i, j;
            copia_matrix(rows2, cols2, matrix2, result);
            scalar_multiply(rows2, cols2, result, scalar);
            matrix_print(rows2, cols2, result);
        }
    }
    else if (opcao == 3)
    {
        if (possible_matrix_multiply(cols1, rows2))
        {
            int result[rows1][cols2];
            matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
            matrix_print(rows1, cols1, result);
        }
        else 
        {
            printf("Erro: as dimensoes da matriz nao correspondem\n");
        }
    }
    else if (opcao == 2)
    {
        if (possible_matrix_sub(rows1, cols1, rows2, cols2))
        {
            int result[rows1][cols2];
            matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
            matrix_print(rows1, cols1, result);
        }
        else 
        {
            printf("Erro: as dimensoes da matriz nao correspondem\n");
        }
    }
    else if (opcao == 1)
    {
        if (possible_matrix_sum(rows1, cols1, rows2, cols2))
        {
            int result[rows1][cols2];
            matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
            matrix_print(rows1, cols1, result);
        }
        else 
        {
            printf("Erro: as dimensoes da matriz nao correspondem\n");
        }
    }
    printf("/n");
    return 0;
}

int main ()
{
    int rows1, rows2, cols1, cols2;
    
    //leitura e declaração da matrix1
    scanf("%d %d%*c", &rows1, &cols1);
    int matrix1[rows1][cols1];
    matrix_read(rows1, cols1, matrix1);

    matrix_print(rows1, cols1, matrix1);
    
    //leitura e declaração da matrix2
    scanf("%d %d%*c", &rows2, &cols2);
    int matrix2[rows2][cols2];
    matrix_read(rows2, cols2, matrix2);

    matrix_print(rows2, cols2, matrix2);
    
    int fim = 0 ;
    while(!fim)
    {
        printa_menu();
        fim = menu (rows1, cols1, matrix1, rows2, cols2, matrix2);
    }
}