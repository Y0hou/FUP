#include <stdio.h>

int main()
{
    int num, contador = 2;
    int fib, aux1 = 1, aux2 = 1;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &num);
    printf("%d\n", aux1);
    printf("%d\n", aux2);
    

    while(contador < num){
        
        fib = aux1 + aux2;
        aux1 = aux2;
        aux2 = fib;

        printf("%d\n", fib);

        contador++;
    }
    return 0;
}