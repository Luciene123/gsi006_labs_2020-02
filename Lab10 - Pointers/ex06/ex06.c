#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");

    return 0;
}

/*Discuta porque no exercício anterior ao somarmos/subtrairmos um valor de ponteiro há um comportamento ]
R: diferente para cada variável. Ocomportamento das operações com ponteiro leva em consideração o tamanho em bytes de 
cada tipo específico de ponteiro: Se for um char muda em cada unidade incrementada ou 
decrementa 1 byte, para int e float 4 bytes e se for double 8 bytes, para sistemas 32 bits.*/