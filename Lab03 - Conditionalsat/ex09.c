#include <stdio.h>
#include <stdlib.h>
int main()
{  
    float vendas,comissao;
    printf("<<Calcula comissao\n>>");
    printf("Digite o valor da venda mensal\n");
    scanf("%f", &vendas); 
    if(vendas<=0) 
    {   
        printf("valor das vendas menor que zero.\n");   
        exit(1);  
    }
    
    
    if(vendas >= 100000)             
    {    
        comissao=700 + ((vendas*16)/100); 
        printf("Comissao:%f\n",comissao);
    }  

    if(vendas < 100000 && vendas >= 80000)
    {             
        comissao=650 + ((vendas*14)/100); 
        printf("Comissao:%f\n",comissao);
    }
          
    if(vendas < 80000 && vendas >= 60000)
    {             
        comissao=600 + ((vendas*14)/100); 
        printf("Comissao:%f\n",comissao);
    }
    if(vendas < 60000 && vendas >= 40000)
    {             
        comissao=550 + ((vendas*14)/100); 
        printf("Comissao:%f\n",comissao);
    }  
     if(vendas < 40000 && vendas >= 20000)
    {             
        comissao=500 + ((vendas*14)/100); 
        printf("Comissao:%f\n",comissao);
    } 
      if(vendas < 20.000)             
    {    
        comissao=400 + ((vendas*14)/100); 
        printf("Comissao:%f\n",comissao);
    }                                        

system("pause");             
return 0;
}
