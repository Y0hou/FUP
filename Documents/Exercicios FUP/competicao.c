#include <stdio.h>

int main()
{
    int n, pedraA, pedraB, valor, aux , vencedor = -1;
    
    scanf("%d", &n);
    
    int contador = 0;
    
    while (contador < n)
    {
    
    scanf("%d %d", &pedraA, &pedraB);
        
            valor = pedraA - pedraB;
            if(valor < 0){
                valor = -valor;
            }
            if(pedraA >= 10 && pedraB >= 10){
            aux = valor;
            if( (aux - 1) > valor ){
                vencedor = contador;
                
            }else if(aux == valor)
            {
                vencedor = contador - 1;
            }
        
    }
        contador++;        
}
    if(vencedor >= 0){
        printf("%d", vencedor);
    }else{
    printf("Sem ganhadores");   
    }
    return 0;
}