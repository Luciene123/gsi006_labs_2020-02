#include<stdio.h>
#include<stdlib.h>
/*Ex(3)O programa que lê o nome de uma pessoa e,  mostra o nome lido. 
Utilizar getchar() para entrada dos dados. O nome pode ter no máximo 50 caracteres. 
o nome digitado deve ser mostrado em letras maiúsculas ( faz isso olhando 
a diferença entre os valores dos caracteres minúsculos e maiúsculos na tabela ASCII).*/
int main()
{
    char nome[50]; //guarda o nome char c; 
    int i,p=0; // p guarda a posicão  atual no vetor 
    char c;
    printf("<< Vetor de char>>\n");
    printf("Digite um nome:\n");       
    c = getchar(); // busca uma letra no buffer 
    while (c != '\n') 
    {  // fica no loop enquanto nao encontrar um ENTER        
        nome[p] = c; 
        p++;        
        c = getchar();    
    } 
    /* transforma as minúsculas em maiúsculas da string a */ 
    while (nome[p] != 0 )
    /* verifica se nome[p] é minúscula */
        if (nome[p] >= 'a' && nome[p] <= 'z')
        /* transforma em maiúscula */
             nome[p] = nome[p] - 'a' + 'A';    

    for (i=0; i < p; i++)
    { 
        printf("O nome digitado é:%c", nome[i]); 
    } 
             


}