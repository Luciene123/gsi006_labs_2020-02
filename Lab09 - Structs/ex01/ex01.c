
#include<stdio.h>
#include<stdlib.h>

struct Telefone{
    char DDD[4];
    char telefone[15];
};
int main()
{   struct Telefone fone1, fone2, fone3;
    strcpy(fone1.DDD,"034");
    strcpy(fone1.telefone,"98888-4444");
    strcpy(fone2.DDD,"034");
    strcpy(fone2.telefone,"97777-1414");
    strcpy(fone3.DDD,"034");
    strcpy(fone3.telefone,"96666-1212");
    printf("Telefone1:(%c)/t%c",fone1.DDD,fone1.telefone);
    printf("Telefone2:(%c)/t%c",fone2.DDD,fone2.telefone);
    printf("Telefone3:(%c)/t%c",fone3.DDD,fone3.telefone);
    system("pause");
return 0;
}

/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/