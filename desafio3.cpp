/*Crie um algoritmo em C++, que tenha uma função que calcula o fatorial de um número inteiro positivo, 
informado pelo usuario*/

#include <iostream>

using namespace std;

int fat(int x)
{
    int fatorial = 1;
    for(int i = 1; i <= x; i++)
    {
        fatorial *= i;
    }
    return fatorial;
}

int main()
{
    int f;
    while (true)
    {
        cout << "Informe um número inteiro positivo: ";
        cin >> f;
        if (f < 0)
        {
            cout << "O número informado é negativo.\n";
        }
        else
        {
            break;
        }
    }    
    int valorFatorial = fat(f);

    cout << "O valor do fatorial de " << f << " é = " << valorFatorial << endl;
    return 0;
}