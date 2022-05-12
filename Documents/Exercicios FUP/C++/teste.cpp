#include<iostream>
using namespace std;
int main()
{
    int num1,num2,operacao;
    char operador;
    
    cout << "digite o primeiro número ";
    cin >> num1;

    cout << "digite o operador: ";
    cin >> operador;

    cout << "digite o segundo número: ";
    cin >> num2;

    if(operador == '+'){
        operacao = num1 + num2;
        cout << operacao; 
    }








    return 0;


}