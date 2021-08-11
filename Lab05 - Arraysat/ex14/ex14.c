#include <stdio.h>
#define MAX 1000
struct Matricula{
    int matr;
    char classeSocial;
    float CRA;};
int main(){
    printf("<< Universidade X >>\n");
    struct Matricula *a;
    int i,n;      
    printf("Digite a quantidade decadastro:\n ");
    scanf( "%d", &n);
    if(n <= MAX)
        exit(1);
        else
        for(i=0;i<n;i++)
        {
            printf("Digite a matricula:\n ");
            scanf( "%d", &a[i].matr);
            printf("Digite a classe social:\n ");        
            scanf( "%c", &a[i].classeSocial);
            printf("Digite o CRA:\n ");        
            scanf( "%f", &a[i].CRA); 
        }
        //Mostra cadastros aluno
         printf("----------Alunos cadastrados.----------\n ");
        for(i=0;i<n;i++)
        { 
            printf("Matricula:%d\n",a[i].matr);            
            printf("Digite a classe social:\n",a[i].classeSocial);           
            printf("CRA:\n",a[i].CRA);        
        }           
           

    return 0;
}

/*
Faça um programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a 
serem armazenados são: número de matrícula (inteiro); 
classe social (A, B, C, D ou E); CRA (real). Ao iniciar o programa, informe 
quantos usuários serão cadastrados. Depois de realizado o cadastro, mostre 
todos os dados lidos. A saída do programa deve ser como o exemplo abaixo.
* Proibido o uso de structs

Exemplo de saída:
<< Universidade X >>
Quantos alunos serão cadastrados: 2

Entre com o número do aluno: 5
Entre com a classe social do aluno 5: B
Entre com o CRA do aluno 5: 70

Entre com o número do aluno: 7
Entre com a classe social do aluno 7: B
Entre com o CRA do aluno 7: 60

==== Alunos Cadastrados ====
Número: 5 Classe Social: B CRA: 70.00
Número: 7 Classe Social: B CRA: 60.00
*/