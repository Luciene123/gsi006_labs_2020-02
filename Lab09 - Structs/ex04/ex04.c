Ex4
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
struct Dados{
    char nome[30];
    char CPF[15];
    char RG[15];
    char sexo[10];    
    char estadoCivil[10];    
    char idade[4];
    char salario[20];};
struct Enderecos{
    char endRes[30];
    char endCom[30];
    struct Dados dados;};
struct Telefones{
    char telRes[15];
    char telCom[15];
    struct Enderecos end;};
struct Datas{
    char datanas[3];
    char dataing[3];
    int anoIn;
    struct Telefones tel;};
int main(){
    struct Datas c1[5];

    printf("Cadastro 0");

    printf("Nome:\n");
    strcpy(c1[0].tel.end.dados.nome,"Laura");
    printf("CPF:\n");
    strcpy(c1[0].tel.end.dados.CPF,"12378911220");
    printf("RG:\n");
    strcpy(c1[0].tel.end.dados.RG," 789158");
    printf("Estado Civil:\n");              
    strcpy(c1[0].tel.end.dados.estadoCivil,"Casada");               
    printf("Sexo:\n");
    strcpy(c1[0].tel.end.dados.sexo," feminino");         
    printf("Salario:\n");
    strcpy(c1[0].tel.end.dados.salario,"2000");
    printf("Idade:\n");
    strcpy(c1[0].tel.end.dados.idade,"27");  
    printf("Data Nacimento:\n");    
    strcpy(c1[0].datanas," 12/10/1989");  
    printf("Data ingresso:\n");
    strcpy(c1[0].dataing,"21/01/2021");
    printf("Telefone residencial:\n");
    strcpy(c1[0].tel.telRes,"34-98444-2356");        
    printf("Telefone residencial:\n");
    strcpy(c1[0].tel.telCom,"34-98444-2356");                
    printf("Endereco Residencial\n");        
    strcpy(c1[0].tel.end.endRes," Uberândia");             
    printf("Endereco Comercial :"); 
    strcpy(c1[0].tel.end.endCom," Uberândia, MG, 38412444");
    printf("Ano cadastro :"); 
    c1[0].anoIn=2000;     

    printf("Cadastro 1");

    printf("Nome:\n");
    strcpy(c1[1].tel.end.dados.nome,"Laura");
    printf("CPF:\n");
    strcpy(c1[1].tel.end.dados.CPF,"12378911220");
    printf("RG:\n");
    strcpy(c1[1].tel.end.dados.RG," 789158");
    printf("Estado Civil:\n");              
    strcpy(c1[1].tel.end.dados.estadoCivil,"Casada");               
    printf("Sexo:\n");
    strcpy(c1[1].tel.end.dados.sexo," feminino");         
    printf("Salario:\n");
    strcpy(c1[1].tel.end.dados.salario,"2000");
    printf("Idade:\n");
    strcpy(c1[1].tel.end.dados.idade,"27");  
    printf("Data Nacimento:\n");    
    strcpy(c1[1].datanas," 12/10/1989");  
    printf("Data ingresso:\n");
    strcpy(c1[1].dataing,"21/01/2021");
    printf("Telefone residencial:\n");
    strcpy(c1[1].tel.telRes,"34-98444-2356");        
    printf("Telefone residencial:\n");
    strcpy(c1[1].tel.telCom,"34-98444-2356");                
    printf("Endereco Residencial\n");        
    strcpy(c1[1].tel.end.endRes," Uberândia");             
    printf("Endereco Comercial :"); 
    strcpy(c1[1].tel.end.endCom," Uberândia, MG, 38412444"); 
    c1[1].anoIn; 

    printf("Cadastro de 2");

    printf("Nome:\n");
    strcpy(c1[2].tel.end.dados.nome,"Laura");
    printf("CPF:\n");
    strcpy(c1[2].tel.end.dados.CPF,"12378911220");
    printf("RG:\n");
    strcpy(c1[2].tel.end.dados.RG," 789158");
    printf("Estado Civil:\n");              
    strcpy(c1[2].tel.end.dados.estadoCivil,"Casada");               
    printf("Sexo:\n");
    strcpy(c1[2].tel.end.dados.sexo," feminino");         
    printf("Salario:\n");
    strcpy(c1[2].tel.end.dados.salario,"2000");
    printf("Idade:\n");
    strcpy(c1[2].tel.end.dados.idade,"27");  
    printf("Data Nacimento:\n");    
    strcpy(c1[2].datanas," 12/10/1989");  
    printf("Data ingresso:\n");
    strcpy(c1[2].dataing,"21/01/2021");
    printf("Telefone residencial:\n");
    strcpy(c1[2].tel.telRes,"34-98444-2356");        
    printf("Telefone residencial:\n");
    strcpy(c1[2].tel.telCom,"34-98444-2356");                
    printf("Endereco Residencial\n");        
    strcpy(c1[2].tel.end.endRes," Uberândia");             
    printf("Endereco Comercial :"); 
    strcpy(c1[2].tel.end.endCom," Uberândia, MG, 38412444");
    c1[2].anoIn; 

    printf("Cadastro 3");

    printf("Nome:\n");
    strcpy(c1[3].tel.end.dados.nome,"Laura");
    printf("CPF:\n");
    strcpy(c1[3].tel.end.dados.CPF,"12378911220");
    printf("RG:\n");
    strcpy(c1[3].tel.end.dados.RG," 789158");
    printf("Estado Civil:\n");              
    strcpy(c1[3].tel.end.dados.estadoCivil,"Casada");               
    printf("Sexo:\n");
    strcpy(c1[3].tel.end.dados.sexo," feminino");         
    printf("Salario:\n");
    strcpy(c1[3].tel.end.dados.salario,"2000");
    printf("Idade:\n");
    strcpy(c1[3].tel.end.dados.idade,"27");  
    printf("Data Nacimento:\n");    
    strcpy(c1[3].datanas," 12/10/1989");  
    printf("Data ingresso:\n");
    strcpy(c1[3].dataing,"21/01/2021");
    printf("Telefone residencial:\n");
    strcpy(c1[3].tel.telRes,"34-98444-2356");        
    printf("Telefone residencial:\n");
    strcpy(c1[3].tel.telCom,"34-98444-2356");                
    printf("Endereco Residencial\n");        
    strcpy(c1[3].tel.end.endRes," Uberândia");             
    printf("Endereco Comercial :"); 
    strcpy(c1[3].tel.end.endCom," Uberândia, MG, 38412444");
    c1[3].anoIn; 

    printf("Cadastro de 4");

    printf("Nome:\n");
    strcpy(c1[4].tel.end.dados.nome,"Laura");
    printf("CPF:\n");
    strcpy(c1[4].tel.end.dados.CPF,"12378911220");
    printf("RG:\n");
    strcpy(c1[4].tel.end.dados.RG," 789158");
    printf("Estado Civil:\n");              
    strcpy(c1[4].tel.end.dados.estadoCivil,"Casada");               
    printf("Sexo:\n");
    strcpy(c1[4].tel.end.dados.sexo," feminino");         
    printf("Salario:\n");
    strcpy(c1[4].tel.end.dados.salario,"2000");
    printf("Idade:\n");
    strcpy(c1[4].tel.end.dados.idade,"27");  
    printf("Data Nacimento:\n");    
    strcpy(c1[4].datanas," 12/10/1989");  
    printf("Data ingresso:\n");
    strcpy(c1[4].dataing,"21/01/2021");
    printf("Telefone residencial:\n");
    strcpy(c1[4].tel.telRes,"34-98444-2356");        
    printf("Telefone residencial:\n");
    strcpy(c1[4].tel.telCom,"34-98444-2356");                
    printf("Endereco Residencial\n");        
    strcpy(c1[4].tel.end.endRes," Uberândia");             
    printf("Endereco Comercial :"); 
    strcpy(c1[4].tel.end.endCom," Uberândia, MG, 38412444");
    c1[4].anoIn; 

    printf("Mostra Cadastro(s) ano de ingresso menor ou igual 1990");    
    for(int u=0;u<5;u++)
    {
        while(c1[u].anoIn <= 1990)
        {
            printf("Nome:\n",c1[u].tel.end.dados.nome);        
            printf("CPF:\n",c1[u].tel.end.dados.CPF);        
            printf("RG:\n",c1[u].tel.end.dados.RG);        
            printf("Estado Civil:\n",c1[u].tel.end.dados.estadoCivil);                   
            printf("Sexo:\n",c1[u].tel.end.dados.sexo);              
            printf("Salario:\n",c1[u].tel.end.dados.salario);        
            printf("Idade:\n",c1[u].tel.end.dados.idade);        
            printf("Data Nacimento:\n",c1[u].datanas);         
            printf("Data ingresso:\n",c1[u].dataing);        
            printf("Telefone residencial:\n",c1[u].tel.telRes);             
            printf("Telefone comercial:\n",c1[u].tel.telCom);                     
            printf("Endereco Residencial\n",c1[u].tel.end.endRes);                  
        }    printf("Endereco Comercial :",c1[u].tel.end.endCom); 
             
    } 
    printf("Sobrescrever cadastro");
    int i,op,cont=0;
    printf("Escolha local(0,1,2,3 4) ou 5 para sair");
    scanf("%d",&op);
    while(op!=5 &&( op>=0 && op < 5)); 
    {   
        for(i=0;i<5;i++)
        {
            if(cont==op)
            { 
                printf("Nome:\n");
                strcpy(c1[0].tel.end.dados.nome,"Laura");
                printf("CPF:\n");
                strcpy(c1[0].tel.end.dados.CPF,"12378911220");
                printf("RG:\n");
                strcpy(c1[0].tel.end.dados.RG," 789158");
                printf("Estado Civil:\n");              
                strcpy(c1[0].tel.end.dados.estadoCivil,"Casada");               
                printf("Sexo:\n");
                strcpy(c1[0].tel.end.dados.sexo," feminino");         
                printf("Salario:\n");
                strcpy(c1[0].tel.end.dados.salario,"2000");
                printf("Idade:\n");
                strcpy(c1[0].tel.end.dados.idade,"27");  
                printf("Data Nacimento:\n");    
                strcpy(c1[0].datanas," 12/10/1989");  
                printf("Data ingresso:\n");
                strcpy(c1[0].dataing,"21/01/2021");
                printf("Telefone residencial:\n");
                strcpy(c1[0].tel.telRes,"34-98444-2356");        
                printf("Telefone residencial:\n");
                strcpy(c1[0].tel.telCom,"34-98444-2356");                
                printf("Endereco Residencial\n");        
                strcpy(c1[0].tel.end.endRes," Uberândia");             
                printf("Endereco Comercial :"); 
                strcpy(c1[0].tel.end.endCom," Uberândia, MG, 38412444");
                c1[0].anoIn=2000;   
            }
        }   
    }    
    char o,d;
    printf("Trocar conteudo de um cadastro para outro");
    printf("Escolha Origem(0,1,2,3 4) ou 5 para sair");
    get(o);
    printf("Escolha Destino(0,1,2,3 4) ou 5 para sair");
    get(d);
    for(i=0;i<5;i++)
    {           
        strcpy(c1[o].tel.end.dados.nome,c1[d].tel.end.dados.nome);            
        strcpy(c1[o].tel.end.dados.CPF,c1[d].tel.end.dados.CPF);            
        strcpy(c1[o].tel.end.dados.RG,c1[d].tel.end.dados.RG);                         
        strcpy(c1[o].tel.end.dados.estadoCivil,c1[d].tel.end.dados.estadoCivil);            
        strcpy(c1[o].tel.end.dados.sexo,c1[d].tel.end.dados.sexo);           
        strcpy(c1[o].tel.end.dados.salario,c1[d].tel.end.dados.salario);            
        strcpy(c1[o].tel.end.dados.idade,c1[d].tel.end.dados.idade);                 
        strcpy(c1[o].datanas,c1[d].datanas);             
        strcpy(c1[o].dataing,c1[d].dataing);            
        strcpy(c1[o].tel.telRes,c1[d].tel.telRes);            
        strcpy(c1[o].tel.telCom,c1[d].tel.telCom);               
        strcpy(c1[o].tel.end.endRes,c1[d].tel.end.endRes);            
        strcpy(c1[o].tel.end.endCom,c1[d].tel.end.endCom);
        c1[o].anoIn=c1[d].anoIn;          
    }    
    system("pause");
    return 0;
}

/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/