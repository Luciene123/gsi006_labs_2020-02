#include <stdio.h>

int main(){
    printf("<< Probabilidades >>\n");
    int i,maior=0,id,soma;
    int n1[4],p[4];    
    printf("Digite a quantidade de bolinhas Amarelas:\n ");
    scanf( "%d", &n1[0]);
    printf("Digite a quantidade de bolinhas Azul:\n ");
    scanf( "%d", &n1[1]);
    printf("Digite a quantidade de bolinhas vermelhas:\n ");        
    scanf( "%d", &n1[2]);
    printf("Digite a quantidade de bolinhas verde:\n ");        
    scanf( "%d", &n1[3]);
    //Soma todas as bolinhas
    for(i=0;i<4;i++)
        soma+=n1[i];
     //Calcula as probalidades      
    for(i=0;i<4;i++)
    {   p[i]=n1[i]/soma;
        printf("Probalidade das bolinhas:%d",p[i]);
        if(p[i]<p[i+1])
        {
            maior=p[i+1];
            id=n1[i+1];
        }
        else 
        {    maior=p[i];
            id=n1[i];
         }
    }
     printf("Maior probalidade:%d, tipo de bolinha:%d\n",maior,id);
        

    return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/