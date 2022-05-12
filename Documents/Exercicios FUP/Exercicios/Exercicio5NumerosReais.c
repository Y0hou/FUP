#include <stdio.h>

int main()
{
float num1;
float num2;
    printf("Digite um numero:");
    scanf("%f", &num1);

    printf("Digite outro numero:");
    scanf("%f", &num2);

    printf("Os numeros sao: %3.2f e %3.2f ", num1, num2);
    
    return 0;
}