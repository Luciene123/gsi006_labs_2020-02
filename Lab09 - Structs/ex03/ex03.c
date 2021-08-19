#include <stdio.h>
#include<stdlib.h>
#include <string.h> 

struct Endereco
{
    char rua[15];
    char numero[6];
    char complemento[15];
    char cidade[15];
    char estado[15];
    char CEP[15];
};
int main()
{   struct Endereco d[3];
    int igual;
    char est[3]="MG";
    for(int i=0;i<3;i++)
    {    
        printf("Digite a rua %c\n", i++);
        gets(d[i].rua);
        printf("Digite o numero %c\n", i++);
        gets(d[i].numero);
        printf("Digite o complemento %c\n", i++);
        gets(d[i].complemento);
        printf("Digite a cidade %c\n", i++);         
        gets(d[i].cidade);
        printf("Digite o estado %c\n", i++);
        gets(d[i].estado);
         printf("Digite o CEP %c\n", i++);
        gets(d[i].CEP);
        printf("\n");
    }           
    for(int i=0;i<3;i++)
    {    
         if(d[i].estado =="MG")
            printf("\nEndereco %c:\t%c\t%c\t%c\t %c\t%c\t%c\n",d[i].rua, d[i].numero, d[i].complemento,d[i].cidade,d[i].estado,d[i].cep, d[i].);
    }
       
    system("pause");
    return 0;
}



/*
1) Crie uma estrutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (ilustração abaixo).  
Cadastre 3 endereços. Mostre ao final, todos os dados dos endereços cadastrados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlandia
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadastrados que sao de "MG":
Joao, 32. casa A. Uberlandia-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/