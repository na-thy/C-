/*Crie um algoritmo que calcula a potência "B^E", em que o usuario informa um numero real B e um numero natural e.
Nesse algoritmo, sempre que é informado o resultado da potência, é perguntado ao usuario, se este deseja calcular 
outra potência*/

#include <iostream>

using namespace std;

float potencia(float x, int y)
{
    float pot = 1;
    int count = 1;
    while (count <= y)
    {
        pot *= x;
        count++;
    }
    return pot;
}

int main()
{
    int b;
    int e;

    while (true)
    {
        cout << "Digite a base (número real): ";
        cin >> b;

        cout << "Digite o valor do expoente: ";
        cin >> e;


        float valorPotencia = potencia(b,e);

        cout << "O resultado de " << b <<  "elevado a " << e << " é igual a: " << valorPotencia << endl;
        
        int q;
        cout << "Digite 1 se quiser calcular outra potência e 0 se não quiser.\n";
        cin >> q;
        if (q == 0)
        {
            break;
        }
    }

}