#include <stdio.h>

int main() {
    printf("<< Calculo da Media >>\n");
    float a1,a2,a3,media;
    char c; 
    printf("Digite a letra inicial do nome do aluno nota:");    
    scanf("%c", &c);   
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2); 
    printf("Digite a 3a nota:");    
    scanf("%f", &a3);     
    media = (1*a1 + 1*a2 + 2*a3)/(1 + 1 + 2);
    printf("Nota media do aluno %c:%2f =>APROVADO\n",c,media);    
    system("pause");
    return 0 ;
}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/