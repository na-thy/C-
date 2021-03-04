//crie um algoritmo que tenha uma função recebe 2 ponteiros
//e troca o valor de referencia entre os dois.

#include <iostream>

using namespace std;

void swap(int* &valor1, int* &valor2);

int main()
{
    float* valor1 = new float;
    float* valor2 = new float;

    cout << "Informe o valor 1: ";
    cin >> *valor1;

    cout << "Informe o valor 2: ";
    cin >> *valor2;

    cout << "O endereço de 1 antes da troca: " << &valor1 << "o valor de 1 antes da troca: " << *valor1 << endl;
    cout << "O endereço de 2 antes da troca: " << &valor2 << "o valor de 2 antes da troca: " << *valor2 << endl;
    cout << endl;

    swap(valor1, valor2);

    cout << "O endereço de 1 antes da troca: " << &valor1 << "o valor de 1 antes da troca: " << *valor1 << endl;
    cout << "O endereço de 2 antes da troca: " << &valor2 << "o valor de 2 antes da troca: " << *valor2 << endl;
    
    return 0;
}

void swap(float* &valor1, float* &valor2)
{
    int tmp;
    tmp = *valor1;
    *valor1 = *valor2;
    *valor2 = tmp;
}