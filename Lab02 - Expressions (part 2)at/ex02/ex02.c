#include <stdio.h>

int main() {
    printf("<< Calculo da Media >>\n");
     float a1,a2,media;
    char c; 
    printf("Digite a letra inicial do nome do aluno nota:");    
    scanf("%c", &c);   
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2);   
    media=(a1+a2)/2;   
    printf("Nota media do aluno %c:%f\n",c,media);
    system("pause");
    return 0 ;
}

/*
=> Altere o algoritmo anterior para que, antes de o usuário entrar com as 
notas do aluno ele entre com a inicial do nome do aluno. Ao final, 
mostrar a inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: C
Digite a nota da prova 1: 70
Digite a nota da prova 2: 85
A nota media do aluno C. eh 77.5
-------------------------------------------------------------------------------
*/