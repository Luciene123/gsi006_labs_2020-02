#include <stdio.h>

int main(){
    printf("<< Normalizando 5 notas >>\n");
    float nota[5],maior=0;
	int i;	 
    for(i=0;i < 5;i++)
    {   	
		printf("Entre com a nota do aluno %d:\n",i++ );
        scanf("%d",&nota[i]);
        nota[i]=nota[i]*2;
        if(nota[i]>= maior)
            maior=nota[i];
    }
    
    for(i=0;i < 5;i++)
    {   
		printf("A nota  normalizada do aluno %d é:%d, maior nota:%d\n",i++,nota[i], maior);
    }
	system("pause");

    return 0;
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/