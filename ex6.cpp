#include <iostream>

using namespace std;

//estrutura de repetição - WHILE / DO WHILE / FOR
int main()
{
    int n;
    cout << "Diga um número inteiro: \n";
    cin >> n;

    int soma = 0;
    int cont = 1;
    
    //Opção 1
    /*while (cont <= n)
    {
        soma += cont;
        cont++;

    }*/

    //Opção 2
    /*do {
        soma += cont;
        cont++; 
    } while (cont <= n);*/
    
    //Opção 3
    for (int i = 1; i <= n; i+=1)
    {
        soma += i;
    }

    cout << "Soma dos números de 0 até " << n << " = " << soma << endl;
    return 0;
}