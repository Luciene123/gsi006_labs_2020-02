#include<stdio.h>
#include<stdlib.h>
intmain()
{
        printf("<< Pointers >>\n");
        int i = 15;
        double u = 30;
        void *p;
        // atribuindo o endereço de 'i' ao ponteiro *p
        p = &i;
        scanf("%d",p);
        printf("Valor de a: %d", *(int*)p);
         // atribuindo o endereço de 'u' ao ponteiro *p
        p = &u;
        scanf("%lf",p);
        printf("Valor de a: %lf", *(double*)p);
    return 0;
}
/*Ponteiros void: é um ponteiro genérico, que aponta para qualquer tipo. 
Sua declaração é deste tipo:void *nome_ponteiroUm ponteiro void pode apontar 
para qualquer tipo. Entretanto, antes de usá-los, é necessário fazer um type 
cast para o tipo que ele aponta. Por exemplo: (int *)  ou (float *)  ou  (double *).
Faça um programa com dois números, um inteiro e um double. Crie um ponteiro void e 
use-o para ler os valores desses dois números com o comando scanf. Após a leitura, 
mostre na tela os números lidos, mas use no printf somente o ponteiro para mostrar os valores.*/