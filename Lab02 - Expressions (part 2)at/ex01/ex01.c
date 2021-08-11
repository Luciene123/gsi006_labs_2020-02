#include <stdio.h>

int main(){
    printf("<< Calculo da Media >>\n");
    float a1,a2,media;    
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2);   
    media=(a1+a2)/2;   
    printf("Nota media:\n",media);
    system("pause");
    return 0 ;

}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/