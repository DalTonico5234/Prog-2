#include <stdio.h>
#include <stdlib.h>
#include "data.h"

void imprimeNumeroExtenso(int mes)
{
    switch(mes)
    {
        case 1: printf("um"); break;
        case 2: printf("dois"); break;
        case 3: printf("três"); break;
        case 4: printf("quatro"); break;
        case 5: printf("cinco"); break;
        case 6: printf("seis"); break;
        case 7: printf("sete"); break;
        case 8: printf("oito"); break;
        case 9: printf("nove"); break;
        case 10: printf("dez"); break;
        case 11: printf("onze"); break;
        case 12: printf("doze"); break;
        case 13: printf("treze"); break;
        case 14: printf("quatorze"); break;
        case 15: printf("quinze"); break;
        case 16: printf("dezesseis"); break;
        case 17: printf("dezessete"); break;
        case 18: printf("dezoito"); break;
        case 19: printf("dezenove"); break;
    }
    if (mes >= 20 && mes < 30)
    {
        printf("vinte e ");
        imprimeMesExtenso(mes-20);
    }
    if (mes >= 30 && mes < 40)
    {
        printf("trinta e ");
        imprimeMesExtenso(mes-30);
    }
    if (mes >= 40 && mes < 50)
    {
        printf("quarenta e ");
        imprimeMesExtenso(mes-40);
    }
    if (mes >= 50 && mes < 60)
    {
        printf("cinquenta e ");
        imprimeMesExtenso(mes-50);
    }
    if (mes >= 60 && mes < 70)
    {
        printf("sessenta e ");
        imprimeMesExtenso(mes-60);
    }
    if (mes >= 70 && mes < 80)
    {
        printf("setenta e ");
        imprimeMesExtenso(mes-70);
    }
    if (mes >= 80 && mes < 90)
    {
        printf("oitenta e ");
        imprimeMesExtenso(mes-80);
    }
    if (mes >= 90 && mes < 100)
    {
        printf("noventa e ");
        imprimeMesExtenso(mes-90);
    }
    if (mes >= 100 && mes < 200)
    {
        printf("cento e ");
        imprimeMesExtenso(mes-100);
    }
    if (mes >= 200 && mes < 300)
    {
        printf("duzentos e ");
        imprimeMesExtenso(mes-200);
    }
    if (mes >= 300 && mes < 400)
    {
        printf("trezentos e ");
        imprimeMesExtenso(mes-300);
    }
    if (mes >= 400 && mes < 500)
    {
        printf("quatrocentos e ");
        imprimeMesExtenso(mes-400);
    }
    if (mes >= 500 && mes < 600)
    {
        printf("quinhentos e ");
        imprimeMesExtenso(mes-500);
    }
    if (mes >= 600 && mes < 700)
    {
        printf("seissentos e ");
        imprimeMesExtenso(mes-600);
    }
    if (mes >= 700 && mes < 800)
    {
        printf("setessentos e ");
        imprimeMesExtenso(mes-700);
    }
    if (mes >= 800 && mes < 900)
    {
        printf("novecentos e ");
        imprimeMesExtenso(mes-900);
    }
    if (mes >= 900 && mes < 1000)
    {
        printf("cento e ");
        imprimeMesExtenso(mes-100);
    }
    if (mes >= 1000)
    {
        imprimeMesExtenso(mes/1000);
        printf("mil e ");
        imprimeMesExtenso(mes%1000);
    }
}

int verificaDataValida(int dia, int mes, int ano)
{
   if (mes >= 1 && mes <= 12)
   {
    
        if (mes == 1) //janeiro
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 2 && !(verificaBissexto(ano))) //fevereiro
        {
           if(dia >= 1 && dia <= 28)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 2 && (verificaBissexto(ano))) //fevereiro
        {
           if(dia >= 1 && dia <= 29)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 3) //março
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 4) //abril
        {
           if(dia >= 1 && dia <= 30)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 5) //maio
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 6) //junho
        {
           if(dia >= 1 && dia <= 30)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 7) //julho
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 8) //agosto
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 9) //setembro
        {
           if(dia >= 1 && dia <= 30)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 10) //outubro
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 11) //novembro
        {
           if(dia >= 1 && dia <= 30)
            {
                return 1;
            }
            return 0;
        } 
        if (mes == 1) //dezembro
        {
           if(dia >= 1 && dia <= 31)
            {
                return 1;
            }
            return 0;
        } 
    
   }
   return 0; 
}

void imprimeMesExtenso(int mes)
{
  switch(mes)
  {
    case 1: printf("Janeiro"); break;
    case 2: printf("Fevereiro"); break;
    case 3: printf("Março"); break;
    case 4: printf("Abril"); break;
    case 5: printf("Maio"); break;
    case 6: printf("Junho"); break;
    case 7: printf("Julho"); break;
    case 8: printf("Agosto"); break;
    case 9: printf("Setembro"); break;
    case 10: printf("Outubro"); break;
    case 11: printf("Novembro"); break;
    case 12: printf("Dezembro"); break;
  }  
}

void imprimeDataExtenso(int dia, int mes, int ano)
{
    printf("%d de ", dia);
    imprimeMesExtenso(mes);
    printf(" de %d", ano);
}

int verificaBissexto(int ano)
{
    if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
    {
        return 1;
    }
    return 0;
}

int numeroDiasMes(int mes, int ano)
{
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        return 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        return 30;
    }
    else if (mes == 2 && verificaBissexto(ano))
    {
        return 29;
    }
    else if (mes == 2 && !(verificaBissexto(ano)))
    {
        return 28;
    }
}

int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    if (ano1 > ano2)
    {
        return -1;
    }
    else if (ano2 > ano1)
    {
        return 1;
    }
    else if (ano1 == ano2)
    {
        if (mes1 > mes2)
        {
            return -1;
        }
        else if (mes2 > mes1)
        {
            return 1;
        }
        else if (mes1 == mes2)
        {
            if (dia1 > dia2)
            {
                return -1;
            }
            else if (dia2 > dia1)
            {
                return 1;
            }
            else if (dia1 == dia2)
            {
                return 0;
            }
        }
    }
}

int calculaDiasAteMes(int mes, int ano)
{
    int dias = 0;
    for (int i=1; i < mes; i++)
    {
        dias += numeroDiasMes(i, ano);
    }
    return dias;
}

int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2)
{
    int dias = 0;
    if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 1) //a primeira é mais antiga
    {
        dias += 365*(ano2-ano1);
        if (ano1 == ano2)
        {
            dias += calculaDiasAteMes(mes2, ano2) + dia2 - calculaDiasAteMes(mes1, ano1) - dia1;
        }
        else
        {
            dias += calculaDiasAteMes(mes2, ano2);
            dias += 365 - calculaDiasAteMes(mes1, ano1);
            dias += dia2;
        }
        
        for (int i = ano1; i <= ano2; i++)
        {
            if (verificaBissexto(i))
            {
                dias += 1;
            }
        }
        return dias;
    }
    else if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == -1) //a segunda é mais antiga
    {
        dias += 365*(ano1-ano2);
        if (ano1 == ano2)
        {
            dias += calculaDiasAteMes(mes1, ano1) + dia1 - calculaDiasAteMes(mes2, ano2) - dia2;
        }
        else
        {
            dias += calculaDiasAteMes(mes1, ano1);
            dias += 365 - calculaDiasAteMes(mes2, ano2);
            dias += dia1;
        }
        for (int i = ano2; i <= ano1; i++)
        {
            if (verificaBissexto(i))
            {
                dias += 1;
            }
        }
        return dias;
    }
    else if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 0) //são iguais
    {
       return 0;
    }
}

