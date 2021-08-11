#include <stdio.h>

int main(){
    printf("<< Valores iguais >>\n");
    int Vet[8];
    int v[4];
	int i,j;
	
    for(i=0;i<8;i++)
    {   
		printf("Entre com um numero inteiro %d:\n",i++);
        scanf("%d",&Vet[i]);
    }
    for(i=0;i<8;i++)
    {
        if(Vet[i]==Vet[i+1])
            v[j]=Vet[i];
		
    }
    for(j=0;j<4;j++)
    {
        if(v[j]!=v[j+1])            
		printf("Os numeros repetidos são %d:\n",Vet[i]);
    }
	system("pause");
    return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/