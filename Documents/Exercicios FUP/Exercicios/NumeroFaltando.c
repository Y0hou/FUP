#include <stdio.h>

int main()
{
    int n = 0, aux = 1, x = 0, soma = 0, somatoria;

    scanf("%d", &n);

    while( aux < n){

        scanf("%d", &x);

        soma += x;

        aux++;
    }
   somatoria = n * (n + 1)/ 2;
printf("%d \n", somatoria);
printf("%d \n", soma);
printf("%d", (somatoria - soma));

    return 0;
}
