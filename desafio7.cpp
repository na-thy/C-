//Crie um algoritmo em que o usuário informa a dimensão de uma matriz e os elementos
//de duas matrizes(ambas com a mesma dimensão) e o algoritmo mostra a soma entre estas duas matrizes

#include <iostream>

using namespace std;

int main()
{
    int linha;
    int coluna;
    cout << "Qual a quantidade de linhas: " << endl;
    cin >> linha;
    cout << "Qual a quantidade de colunas: " << endl;
    cin >> coluna;

    float matriz1[linha][coluna];
    float matriz2[linha][coluna];

    cout << "Digite abaixo os elementos da matriz 1: " << endl;
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
        
    }

    cout << "Digite abaixo os elementos da matriz 2: " << endl;
    for(int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            cout << "Digite o elemento da linha " << i+1 << " coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }
    cout << endl;
    cout << "A soma das matrizes é:" << endl;
    float matrizSoma[linha][coluna];  
    for(int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j]; 
        }

    }

    for (int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;

    }

    return 0;
}