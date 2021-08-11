#include <stdio.h>

int main(){
    printf("<< Five Values with index >>\n");
    int Vet[5];
	int i;
	int maior=0, menor=0,soma=0, posmaior, posmenor;
	float media=0;
   	for(i=0;i<5;i++)
    {   
		printf("Entre com o numero %d:\n",i++);
        scanf("%d",&Vet[i]);
        if(Vet[i]<= menor)
            menor=Vet[i];
            posmenor=i;
        if(Vet[i]>= maior)
            maior=Vet[i];
            posmaior=i;
        	soma+=Vet[i];
      	}
    media=soma/5;
    for(i=0;i<6;i++)
    {
        printf("Os valor %d digitados são:%d\n",i,Vet[i]);         	
 	}
    printf("O maior valor é:%d, localizado na posicão %d do vetor\n",maior,posmaior);
    printf("O menor valor é:%d localizado na posição %d do vetor\n",menor,posmenor);
    printf("A média é:%f\n",media);
	system("pause");

    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/