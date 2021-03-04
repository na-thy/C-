/*Em um programa de Moradia Popular, somente pessoas maiores de 21 anos e com renda abaixo de 1.200 podem participar
Crie um algoritmo em que o usuário informe a renda e idade, e é informado se ele pode ou não participar desse programa.*/

#include <iostream>

using namespace std;

int main()
{
    int idade;
    float renda;

    cout << "Informe a sua idade: ";
    cin >> idade;

    cout << "Informe sua renda: ";
    cin >> renda;

    if (idade >= 21 && renda >= 1.200)
    {
        cout << "Usuário apto para participar do programa Moradia Popular.\n";
    }

    else
    {
        cout << "Usuário não poderá participar do programa Moradia Popular.\n";
    }
    return 0;
}