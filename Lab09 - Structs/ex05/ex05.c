#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
#include <ctype.h> 
 struct AlunosG{
    char nome[30];
    char matricula[15];
    float nota1[3];
    float nota2[3];
    float nota3[3];
    float falta;
};

int main()
{   struct AlunosG *aluno[3];
    
    float media1=0,media2=0,media3=0, maiornota=0,maiormedia=0, menormedia=0,soma1=0,soma2=0,soma3=0;
    for(int i = 0;i < 3;i++)
    {
        printf("Entre com o nome do aluno");
        gets(aluno[i]->nome);
        printf("Entre com a matrícula do aluno");
        gets(aluno[i]->matricula);
        printf("Entre com a nota da primeira prova do aluno");
        scanf("%f",&aluno[i]->nota1);
        soma1 += *aluno[i]->nota1;
        if( *aluno[i]->nota1 > maiornota)       
            maiornota=*aluno[i]->nota1;
        printf("Entre com a nota da segunda prova do aluno");
        scanf("%f",&aluno[i]->nota2);
        soma2+= *aluno[i]->nota2;
        printf("Entre com a nota da terceira prova do aluno");
        scanf("%f",&aluno[i]->nota3);
        soma3+= *aluno[i]->nota3;
        printf("Entre com a falta do aluno");
        scanf("%f",&aluno[i]->falta);
        
    }
    media1=soma1/3;
    media2=soma2/3;
    media3=soma3/3;
    if(media1 > media2 && media2 < media3)
       printf("Maior media é:",media1);
    if(media2 > media3 && media3 < media1)
        printf("Maior media é:",media2);
    if(media3 > media1 && media1 < media2)
        printf("Maior media é:",media3);
    if(media1 < media2 && media2 > media3)
        printf("Menor media é:",media1);
    if(media2 < media3 && media3 > media1)
        printf("Menor media é:",media2);
    if(media3 < media1 && media1 > media2)
        printf("Menor media é:",media3);
    
    for( int i = 0 ; i < 3; i++)
    {    if((media1 > (float)60) && ((aluno[i]->falta) <= ((float)72*(float)75)/100))
        printf("Aluno %c aprovado.",aluno[i]->nome);
    }

system("pause");
return 0;
}
/*
5.Crie uma estrutura representando os alunos de um curso de graduação. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
nota da segunda prova, nota da terceira prova, média e número de faltas.

    (a) Permita ao usuário entrar com os dados de 3 alunos. 
    (b) Encontre o aluno com maior nota da primeira prova.
    (c) Encontre o aluno com maior média geral.
    (d) Encontre o aluno com menor média geral.
    (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
        maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
        No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
        falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
        Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
        mostrar a mensagem “Reprovado por falta”. 


-------------------------------------------------------------------------------
Exemplo de saída:
Entre com os dados do 1º aluno: 
Matricula: 1
Nome: Paulo
Nota da prova 1: 50
Nota da prova 2: 70
Nota da prova 3: 60
Numero de faltas: 12

Entre com os dados do 2º aluno: 
Matricula: 2
Nome: Gustavo
Nota da prova 1: 95
Nota da prova 2: 90
Nota da prova 3: 100
Numero de faltas: 19

Entre com os dados do 3º aluno: 
Matricula: 3
Nome: Luis
Nota da prova 1: 50
Nota da prova 2: 60
Nota da prova 3: 58
Numero de faltas: 2

Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.
Aluno com maior media geral foi Gustavo com 95,0 pontos.
Aluno com menor media geral foi Luis com 56,0 pontos.

Situacao dos Alunos: 
1- Paulo. Aprovado.
2- Gustavo. Reprovado por falta.
3- Luis. Reprovado por nota.
-------------------------------------------------------------------------------
*/