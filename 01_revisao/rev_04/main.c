#include <stdio.h>
#include <math.h>

int main()
{
    int decimal;
    scanf("%d", &decimal);   

    int maiorExpoente = 1;
    while (decimal/pow(8, maiorExpoente) >= 8)
    {
        maiorExpoente++;
    }


     
    while (maiorExpoente >= 0)
    {
        int n = decimal/pow(8, maiorExpoente);
        decimal -= n*pow(8, maiorExpoente);        
        printf("%d", n);

        maiorExpoente--;
    }
    
}