#include <stdio.h>

int main() {
    printf("<< Pagamento encanador >>\n");
     float n,salB,salL, IR, ISS;    
    printf(" Digite os dias trabalhados R$:\n");
    scanf("%f",&n);
    salB=n*30;
    IR=(n*8)/100;
    ISS=(n*4)/100;
    salL= n-(IR+ISS);
    printf("Salario bruto de %f dias trabalhados R$: %f\n",n,salB); 
    printf("Desconto de 8%% do IR: R$:- %f",IR);
    printf("Desconto de  4%% do ISS R$:- %f",salL);
     printf("Salario liquido em R$: %f\n",salL); 
    system("pause");
    return 0;
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/