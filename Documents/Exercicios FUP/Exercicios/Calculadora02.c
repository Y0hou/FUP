#include <stdio.h>

int main()
{
    float x, y;
    int op;
    float resultado;

    printf("Insira um valor: \n");
    scanf("%f", &x);

    printf("Insira um valor: \n");
    scanf("%f", &y);

    printf(" Insira o tipo de oprecao. \n");
    printf("Soma \n Subtracao \n Multiplicacao \n Divisao \n");
    scanf("%d", &op);

    switch(op){

case 1:
    resultado = x + y;
    break;
case 2:
    resultado = x - y;
    break;
case 3:
    resultado = x * y;
    break;
case 4:
    resultado = x / y
    break;

    default: printf("Erro");
    }
    printf("Resultado: %.2f", resultado);
    return 0;
}
