//Utilizando apenas ponteiros: usuário informa a idade de 2 pessoas
//o algoritmo informa a média destas duas idades.

#include <iostream>

using namespace std;

int main()
{
    int* idade1 = new int;
    int* idade2 = new int;
    float* media = new float;

    cout << "Informe a idade do usuário 1: ";
    cin >> *idade1;

       cout << "Informe a idade do usuário 2: ";
    cin >> *idade2;

    *media = (*idade1 + *idade2) / 2;

    cout << "A média das idade de " << *idade1 << " e " << *idade2 << " é igual a: " << *media << endl;

    return 0;
}