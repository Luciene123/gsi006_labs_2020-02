#include <stdio.h>
#include <math.h>

int main() {
    printf("<< Distancia >>\n");
    float Xa,Xb, Ya, Yb, distancia;     
    printf("Digite Xa:\n");
    scanf("%f", &Xa);
    printf("Digite Xb: \n");    
    scanf("%f", &Xb);
    printf("Digite Ya:\n"); 
    scanf("%f", &Ya);
    printf("Digite Yb:\n");      
    scanf("%f", &Yb);
    distancia = sqrt( pow(Xb-Xa, 2) + pow(Yb-Ya, 2) ); 
    printf("O valor de %f ao quadrado é %f",distancia);
    system("pause");
    return 0;
}

/*
=> Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0).  
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número

-------------------------------------------------------------------------------
Exemplo de saída:

<< Distancia >>
Entre com a coordenada x: 3
Entre com a coordenada y: 4
A distancia entre os pontos (3,4) e (0,0) eh 5.0
-------------------------------------------------------------------------------
*/