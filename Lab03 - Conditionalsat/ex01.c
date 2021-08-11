#include <stdio.h>

int main(){
    printf("<< Cálculo da Média >>");
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
   
    media = (p1*a1 + p2*a2 + p3*a3)/(p1 + p2 + p3); 
    if(media>=60)
         printf("Nota media do aluno %c:%2f =>APROVADO\n",c,media);
    else
        printf("Nota media do aluno %c: %2f =>REPROVADO\n",c,media);
    system("pause");
    return 0 ;
}
/*

*/