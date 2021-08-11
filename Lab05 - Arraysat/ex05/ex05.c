#include <stdio.h>

int main(){
    printf("<< Five Values >>\n");
    int Vet[5];
	int i;
	int maior=0, menor=0,soma=0;
	float media=0;
    for(i=0;i < 5;i++)
    {   
		printf("Entre com o numero %d:\n",i+1);
        scanf("%d",&Vet[i]);
        if(Vet[i]<= menor)
            menor=Vet[i];
        if(Vet[i]>= maior)
            maior=Vet[i];
        	soma+=Vet[i];
    	}
    	media=soma/5;
    	for(i=0;i < 5;i++)
    	{
         	printf("Os valores digitados são:%d\n",Vet[i]);
         	
    	}
	printf("O maior valor eh:%d\n",maior);
    printf("O menor valor eh:%d\n",menor);
    printf("A média eh:%f\n",media);
	system("pause");

    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/