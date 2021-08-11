#include <stdio.h>

int main() {
    printf("== Operadores Booleanos ==\n");
      int op, a1,a2 ;    
    printf("Digite o primeiro valor (A):\n");    
    scanf("%f", &a1);
    printf("Digite o segundo valor (B):\n");    
    scanf("%f", &a2);
    printf("Digite 0 para falso e 1 para verdadeiroEntre :");    
    scanf("%f", &op);
    //verdadeiro=1; falso==0
    if(a1==1 && a2==1)
         printf("A and B: \n", 1);
    else
        printf("A and B: \n", 0);      

    if(a1==0 && a2==0)
         printf("A or B: \n", 0);
     else    
         printf("A or B: \n", 1);     
     
    if(a1 != a2)
         printf("A xor B: \n", 1);
      else 
        printf("A xor B: \n", 0);    
    
    if(op==0)
         printf("notA: \n", 1);
    else
        printf("notA: \n", 0);
   
    system("pause");
    return 0 ;
}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/