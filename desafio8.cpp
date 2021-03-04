//crie um algoritmo que o usuário informa o tamanho de um vetor, e seus elementos
//o algortimo deve imprimir este vetor e logo após, perguntar ao usuário se ele quer imprimir
//outro vetor. utilize o delete após a impressão do vetor

#include <iostream>

using namespace std;

int main()
{
    int tamanho;
    int teste;

    do {
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanho;
        float* vetor = new float[tamanho];

        for(int i = 0; i < tamanho; i++)
        {
            cout << "Digite o elemento " << i + 1 << " do vetor: " << endl;
            cin >> vetor[i];
        }
        cout << "O vetor inserido é: \n[ ";

        for(int i = 0; i < tamanho; i++)
        {
            cout << vetor[i] << " ";
        }
        cout << "]" << endl;

        cout << "Se deseja inserir outro vetor digite 1, caso contrario digite 0." << endl;
        cin >> teste;

        delete [] vetor;

    } while (teste != 0);
    return 0;

}