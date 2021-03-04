#include <iostream>

using namespace std;

int funcao(int x)
{
    int valor;
    valor = x*x - 3*x + 5;
    return valor;
}

int main()
{
    int numero;
    cout << "Digite o valor do x: ";
    cin >> numero;

    int valorFuncao = funcao(numero);

    cout << "O valor de X é = " << valorFuncao << endl;

    return 0;
}