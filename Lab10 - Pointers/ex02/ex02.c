#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int a = 40; // cria uma variável do tipo inteiro, chamada a, e inicializa 
                // com valor 40
    int *p; // cria uma variável do tipo ponteiro para inteiro, chamada p, e o 
            //conteúdo inicial é lixo
    p = &a; // faz p receber o endereço de a. Dizemos que p aponta para a

    //(a)

    //(b)

    //(c)

    return 0;
}

/*

Neste exemplo, dizemos que “p aponta para a” ou “p referencia a”. Faça
(a)	Com o código acima e mostre o endereço da variável /a/ de duas formas: 
    uma usando &a e outra usando o ponteiro p. Os endereços devem ser os mesmos.
(b)	Altere o valor da variável /a/ usando o scanf sem usar o operador &.
(c)	Utilizando a função scanf, altere o valor de 10 do vetor /val/ para 20. 
    Não use o operador & no scanf. Utilize uma variável do tipo ponteiro 
    para inteiro para guardar o endereço da posição do vetor.
(d) Mostre o mapa de memória deste código ao final da execução
(e) Utilizando o conceito de desreferenciamento, mostre agora todo o vetor 
    /val/ em um printf, mas com o segundo argumento sendo um ponteiro para 
    os elementos de val. Não use a variável val. Mostre o mapa de memória 
    deste código ao final da execução
(f) Utilize o conceito de desreferenciamento para alterar todo vetor val, 
    subtraindo de cada elemento uma unidade.

+----------+----------------+---------------+------+--+
|          |     Blocos     |               |      |  |
| Endereço |       (1 byte) | Nome variável | Tipo |  |
+----------+----------------+---------------+------+--+
| 0 / NULL |   indefinido   |      ----     | ---- |  |
+----------+----------------+---------------+------+--+
|     1    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     2    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     3    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     4    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     5    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     6    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     7    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     8    |                |               |      |  |
+----------+----------------+---------------+------+--+
|     9    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    10    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    11    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    12    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    13    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    14    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    15    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    16    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    17    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    18    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    19    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    20    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    21    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    22    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    23    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    24    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    25    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    26    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    27    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    28    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    29    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    30    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    31    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    32    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    33    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    34    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    35    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    36    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    37    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    38    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    39    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    40    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    41    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    42    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    43    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    44    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    45    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    46    |                |               |      |  |
+----------+----------------+---------------+------+--+
| coloque   "lx" para lixo                  |      |  |
+---------------------------+---------------+------+--+
| Programa 32   bits        |               |      |  |
+---------------------------+---------------+------+--+
*/