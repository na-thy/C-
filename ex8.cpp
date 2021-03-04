#include <iostream>

using namespace std;


// Vetores
int main()
{
    //Alocação estática
    //int vetor[4];
    //vetor[0] = 5;
    //vetor[1] = 10;
    int vetor[4] = {5, 10};

    //a lista possui 4 lugares armazenados no vetor (os lugares sem valores, ele dá o valor de 0), a partir do 4 lugar, o pc pega os valores da memoria...
    cout << "[";
    for(int i = 0; i < 10; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;


    int x = sizeof(vetor)/sizeof(int);
    int y = sizeof(int);

    cout << "Tamanho de inteiros: " << x << endl;
    cout << "Quantidade de elementos do vetor: " << x << endl;
    cout << endl;
    cout << endl;

    //Alocação dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int* vetor1 = new int[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        cout << "Digite o elemento " << i + 1 << " do vetor: ";
        cin >> vetor1[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor1[i] << " ";
    }
    cout << endl;

    delete [] vetor1;

    return 0;
}