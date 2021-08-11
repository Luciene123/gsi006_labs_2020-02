#include <stdio.h>

int main() {
    printf("== Conversor de numeros binarios ==\n");
    int bit1, resto1, decimal1 = 0;
    int bit2, resto2,decimal2 = 0;
    int bit3, resto3,decimal3 = 0;
    int bit4, resto4, decimal4 = 0;    
    
    //Dite os Dígitos do número binario(4 bits) da esquerda para a direita

    printf("Digite o  1o bit:");    
    scanf("%i", &bit1);
    resto1 = bit1 - (( bit1 / 10)*10);		
	bit1 =  bit1 / 10;
	decimal1 += resto1 * pow(2,0);

    printf("Digite o  2o bit:");    
    scanf("%i", &bit2);
    resto2 = bit1 - (( bit2 / 10)*10);		
	bit2 =  bit2 / 10;
	decimal2 =decimal1 + (resto2 * pow(2,1));

    printf("Digite o  3o bit:");    
    scanf("%i", &bit3);
    resto3 = bit3 - (( bit3 / 10)*10);		
	bit3 =  bit3 / 10;
	decimal3 = decimal2 + (resto3 * pow(2,2));

    printf("Digite o  4o bit:");    
    scanf("%i", &bit4);
    resto4 = bit4 - (( bit4 / 10)*10);		
	bit4 =  bit4 / 10;
	decimal4 = decimal3 +(resto4 * pow(2,3));    
    
    printf("Decimal convertido: %d; dos Bits: %i%i%i%i\n",decimal4,bit1,bit2,bit3,bit4 );    
    system("pause");
    return 0;	
}

/*
=> Faça um conversor de número binário para decimal (inteiro). 
O número deve ter 4 bits, sendo o bit mais significativo digitado primeiro. 
Mostrar na resposta o número binário e o número decimal.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor de numeros binarios >>
Digite o 1o. bit: 1
Digite o 2o. bit: 0
Digite o 3o. bit: 1
Digite o 4o. bit: 1
O numero binario 1011 corresponde ao numero decimal 11
-------------------------------------------------------------------------------
*/