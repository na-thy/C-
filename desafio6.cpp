//Crie um algoritmo em c++, em que o usuário informa os gastos com alimentação de 5 famílias,
//calcula a média de gastos e diz de cada família, se seu gasto é abaixo, acima ou na média.

#include <iostream>

using namespace std;

int main()
{
    float vetor[5];
    float mediaFamilia = 0;

    for(int i = 0; i < 5; i++)
    {
        cout << "Qual os gastos da família " << i+1 << ": ";
        cin >> vetor[i];

        mediaFamilia += vetor[i];
    }

    mediaFamilia = mediaFamilia / 5;
    cout << "Media de gastos: " << mediaFamilia << endl;

    for (int i = 0; i < 5; i++)
    {
        if(vetor[i] < mediaFamilia)
        {
            cout << "A família " << i+1 << " tem gastos abaixo da média." << endl;
        }
        else if(vetor[i] == mediaFamilia)
        {
            cout << "A família " << i+1 << " tem gastos na média." << endl;
        }
        else
        {
            cout << "A família " << i+1 << " tem gastos acima da média." << endl;
        }
    }
    return 0; 
}