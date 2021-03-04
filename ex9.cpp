#include <iostream>

using namespace std;

//Matrizes
int main()
{
    int matriz[4][5];

    matriz[0][0] = 10;
    matriz[0][1] = 11;
    matriz[0][2] = 12;
    matriz[0][3] = 13;
    matriz[0][4] = 14;

    matriz[1][0] = 20;
    matriz[1][1] = 21;
    matriz[1][2] = 22;
    matriz[1][3] = 23;
    matriz[1][4] = 24;

    matriz[2][0] = 30;
    matriz[2][1] = 31;
    matriz[2][2] = 32;
    matriz[2][3] = 33;
    matriz[2][4] = 34;

    matriz[3][0] = 40;
    matriz[3][1] = 41;
    matriz[3][2] = 42;
    matriz[3][3] = 43;
    matriz[3][4] = 44;


    for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }    
 
    return 0;
}