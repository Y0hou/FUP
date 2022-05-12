#include <stdio.h>

int main()
{
    double num1 = 0, num2 = 0, soma = 0, sub = 0, mult = 0, div = 0;
    char op;

    scanf("%lf %lf %c", &num1, &num2, &op);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    if(op == '+'){
            printf("%f", soma);
    }else if(op == '-'){
        printf("%f", sub);
    }else if(op == '*'){
        printf("%f", mult);
    }else if(op == '/' && op != 0){
        printf("%f", div);
    }else
        printf("Operacao invalida");


    return 0;
}
