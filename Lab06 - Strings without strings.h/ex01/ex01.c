#include <stdio.h>

int main ( )
 {
    char c ;

    for ( c = 32; c < 127; c++)
    printf ( "%c %d/t%c %d/t%c %d/t%c %d/t%c %d/t%c %d/t%c %d/t",c,c,c,c,c,c,c,c,c,c,c,c,c,c) ;
    system("pause");
    return 0 ;
 }
 /*Monte um programa que mostra os valores e os caracteres correspondentes da tabela ASCII, 
 para valores de 32 à 126. Mostrar 7 caracteres por linha. Para padronização, utilize três 
 caracteres para representar o valor numérico,  separe  o número da letra com espaço, e dada 
 par número/letra com tabulação (/t)*/