#include <iostream>

using namespace std;

int main()
{
   int number1;
   int number2;
   
   cout << "Digite o primeiro número: ";
   cin >> number1;

   cout << "Digite o segundo número: ";
   cin >> number2;

   if (number1 == number2)
    cout << number1 << " == " << number2 << endl;

   if (number1 != number2)
    cout << number1 << " != " << number2 << endl;

   if (number1 < number2)
    cout << number1 << " < " << number2 << endl;

   if (number1 > number2)
    cout << number1 << " > " << number2 << endl;

   if (number1 <= number2)
    cout << number1 << " <= " << number2 << endl;

   if (number1 >= number2)
    cout << number1 << " >= " << number2 << endl;

    return 0;
}