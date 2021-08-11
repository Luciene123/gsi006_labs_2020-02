#include <stdio.h>

#include <stdio.h>

int main()
{
    int v1[5];
    int v2[5];
    int v[5];
    int i,j,k;
    printf("<<Separa pares e ímpares\n");
    for( i = 0, j = 0, k = 1; i < 5, j < 5, k < 6 ; i++, j++,k++ )
    {
        printf("Digite o valor%d de 1:\n ",i++);
        scanf( "%d", &v[i] );
        if( v[i] % 2 == 0)
            v2[j]=v[1];
        else
            v1[k]=v[i];
    }    
    for(  j = 0, k = 0; j < 5, k < 5 ; j++,k++ )
    {
        printf("ímpares:%d\n ", v1[k]);
        printf("pares:%d\n ", v2[j]);

    } 
    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.  
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/