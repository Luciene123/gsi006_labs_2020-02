#include <stdio.h>
#include<stdlib.h>
#include<math.h>
float media( float som[5], int n )
{
    float soma = 0.0;
    int i = 0;
    for( i = 0; i < 5; i++ )
        soma += som[i];
    return soma/n;
}

float variancia( float som[5], int n )
{
    float soma = 0.0;
    float desvio = 0.0;
    float mediav= 0.0 ;
    int i = 0;
    for( i = 0; i < 5; i++ )
    {
        desvio = som[i] - mediav;
        soma += (desvio * desvio);
    }

    return soma / n;
}

float desvio_padrao( float som[5], int n  )
{
    float variancia ;
    return sqrt( variancia );
}
int main(){
    printf("<< Media, variância e desvio-padrao >>\n");
    float vetor[5];
    int  i; 
    for( i = 0; i < 5; i++ )
    {
        printf("Digite um numero: ");
        scanf( "%f", &vetor[i] );              
    }
    
    printf("Media = %g\n", media( vetor, 5 ) );
    printf("Variancia = %g\n", variancia( vetor, 5 ) );
    printf("Desvio Padrao = %g\n", desvio_padrao( vetor, 5 ));
    return 0;
}
    


/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
