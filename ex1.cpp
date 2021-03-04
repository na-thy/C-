#include <iostream>
using namespace std; 

int main()
{
    int number1;
    int number2;

    cout << "Digite o primeiro número: ";
    cin >> number1;
    cout << "Digite o segundo número: ";
    cin >> number2;

    int sum = number1 + number2;
    int sub = number1 - number2;
    int mul = number1 * number2;
    int div = number1 / number2;
    float fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    cout << "Soma: " << sum << endl;
    cout << "Subtração: " << sub << endl;
    cout << "Multiplicação: " << mul << endl;
    cout << "Divisão Inteira: " << div << endl;
    cout << "Divisão Real: " << fdiv << endl;
    cout << "Resto: " << res << endl;

    return 0;
}