#include <stdio.h>

int main(){
    printf("<< Subtracao de vetores >>\n");
    int A[3];
    int B[3];
    int C[3];
    int i,j,k,n;
    printf("<<Subtração de vetrores\n");

    for( i = 0, j = 0, k = 0, n =1 ; i < 3, j < 3, k < 3, n < 4 ; i++, j++,k++,n++ )
    {
        printf("Digite o valor%d de A:\n ",n);
        scanf( "%d", &A[i] );
        printf("Digite o valor%d de B:\n ",n);
        scanf( "%d", &B[j] );
        C[k]=A[i]-B[j];
    }
    for(k=0;i<3;k++)
        {
            printf("O vetor C, definido C=A-B é (%d,\t)",C[k]);
        }
 }

    return 0;
}

/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80) 
*/