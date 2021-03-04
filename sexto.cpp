#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Diga um número inteiro nao negativo: ";
    cin >> n;
    
    int soma = 0;
    int count = 1;

    //while(count <= n)
   //{
   //     soma+=count;
   //     count++;
   //}

   //do{
   //    soma+=count;
   //    count++;
   //} while( count <= n);

   for (int j = 1; j <= n; j++)
   {
       soma+=j;
   }



    cout << "Soma dos números de 0 até " << n << " = " << soma << endl;
    return 0;
}
