#include <stdio.h>

int main() {
    printf("<< Loteria >>\n");
    printf("<<Loteria >>\n");
    int g1,g2,g3;     
    g1=(780000*46)/100;
    g2=(780000*32)/100;
    g3=(780000*22)/100;
    printf(" Primeiro vencedor R$:%d\n", g1);  
    printf(" Segundo vencedor R$:%d\n", g2);
    printf(" Terceiro vencedor R$:%d\n", g3); 
    system("pause");   
    return 0;
}

/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/