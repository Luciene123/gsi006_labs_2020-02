#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
 struct controleEnergia{
    char nome[15];
    float potencial;
    float horasDia;
};
int main()
{
    struct controleEnergia controle[5];
    float consumo,consumot,totalH;
    for(int i = 0;i < 5; i++)
    {
        printf("----------------Controle de Energia--------------------");
        printf("Digite o nome do eletrodoméstico ");
        gets(controle[i].nome);
        printf("Digite o potencial ");
        scanf("%f",&controle[i].potencial);
        printf("Digite as horas ");
        scanf("%f",&controle[i].horasDia);
        consumot += controle[i].potencial;
        totalH+=controle[i].horasDia;
    }
        printf("Donsumo relativo %c:%f f\n" ,controle[0].nome,(controle[0].potencial/consumot),totalH);
        printf("Donsumo relativo %c:%f\n" ,controle[1].nome,(controle[1].potencial/consumot),totalH);
        printf("Donsumo relativo %c:%f\n" ,controle[2].nome,(controle[2].potencial/consumot),totalH);
        printf("Donsumo relativo %c:%f\n" ,controle[3].nome,(controle[3].potencial/consumot),totalH);
        printf("Donsumo relativo %c;%f\n" ,controle[4].nome,(controle[4].potencial/consumot),totalH);
        printf("Consumo total:%f em %f horas",consumot,totalH);

        system("pause");
        return 0;
}

/*
6.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa.

    • Crie e leia as informações de 5 eletrodomésticos: o nome (máximo 15 letras), 
      potencia (real,  em kW) e tempo ativo por dia (real, em horas).

    • Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e
      o consumo relativo de cada eletrodoméstico  (consumo/consumo total) nesse período
      de tempo. Apresente este ultimo dado em porcentagem.

-------------------------------------------------------------------------------
Exemplo de saída:
Informe os dados do 1º eletrodomestico: 
Nome: Geladeira
Potencia: 800
Tempo ativo por dia: 24

Informe os dados do 2º eletrodomestico: 
Nome: Ar Condicionado
Potencia: 1500
Tempo ativo por dia: 8

Informe os dados do 3º eletrodomestico: 
Nome: Chuveiro
Potencia: 4500
Tempo ativo por dia: 1

Informe os dados do 4º eletrodomestico: 
Nome: Radio
Potencia: 100
Tempo ativo por dia: 6

Informe os dados do 5º eletrodomestico: 
Nome: Computador
Potencia: 750
Tempo ativo por dia: 18

Informe um valor de tempo (em dia): 30
Consumo total: 1494000 KW
Consumo relativo: 
Geladeira 38.6%
Ar Condicionado 24.1%
Chuveiro 9.0%
Radio 1.2%
Computador 27.1%
-------------------------------------------------------------------------------
*/