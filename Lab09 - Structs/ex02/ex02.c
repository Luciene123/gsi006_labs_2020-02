
#include <stdio.h>
#include<stdlib.h>
#include <string.h> 

struct Data{
    char dia[3];
    char mes[3];
    char ano[5];
};

int main()
{  
    struct Data d[3];
    int maior=0;
    for(int i=0;i==3;i++)
    {
        printf("Digite o dia %c\n", i++);
        gets(d[i].dia);
        printf("Digite o mes %c\n", i++);
        gets(d[i].mes);
        printf("Digite o ano %c\n", i++);
        gets(d[i].ano);
        printf("\n");
        if(maior <= d[i].ano)
         maior=d[i].ano;

    }
    for(int i=0;i<3;i++)
    {
        printf("\nTelefone1:%c/t%c/t%c\n",d[i].dia,d[i].mes[i],d[i].ano);
    }
    
    
    system("pause");
    return 0;
}

/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/