#include <stdio.h>

int main() {
    printf("<< Pagamento encanador >>\n");
    float n,salB,salL, IR, ISS;    
    printf(" Digite os dias trabalhados R$:\n");
    scanf("%f",&n);
    salB=n*30;   
    ISS=(salB*4)/100;
    IR=((salB-ISS)*8)/100;
    salL= salB-(ISS+IR);
    printf("Salario bruto de %f dias trabalhados R$: %f\n",n,salB); 
    printf("Desconto de 4%% do ISS: R$:- %f",ISS);
    printf("Desconto do ISS de 8%%, sobre:(salario bruto R$: %f - IR R$: %f)  R$:- %f",salB, IR);
     printf("Salario liquido em R$: %f\n",salL); 
    system("pause");
    return 0;
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/