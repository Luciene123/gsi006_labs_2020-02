#include <stdio.h>

int main() {
    printf("<< Media Aritmetica >>\n");
    float a1,a2,a3,a4,media;    
    printf("Digite a 1a nota:");    
    scanf("%f", &a1);
    printf("Digite a 2a nota:");    
    scanf("%f", &a2);
    printf("Digite a 3a nota:");    
    scanf("%f", &a3);
    printf("Digite a 4a nota:");    
    scanf("%f", &a4);
    media=(a1+a2+a3+a4)/4.0;
    printf("===Notas== \n");
    printf("Nota 1: %f; Nota 2: %f; Nota 3: %f; Nota 4: %f\n",a1,a2,a3,a4 );
    printf("Media== \n",media);
    system("pause");
    return 0 ;
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/