#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    char nome[13]= "José Augusto";
    char *p;
    p=nome;
    int i=0;
    while(nome!='\0')
    {    
        printf("Nome:%c",p[i]);
        i++;
    }
    return 0;
}
/*Utilizando aritmética de ponteiros, mostre na tela o conteúdo da string 
char nome[] = “José Augusto”. Utilize o   printf com %c e não %s*/