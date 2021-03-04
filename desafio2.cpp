//Crie um algoritmo em C++, em que o usuario informa as notas de 3 provas de um aluno
//e tbm a media da nota da turma toda. O algoritmo deve calcular a media deste aluno 
//e informar se sua nota é acima da média, abaixo da média ou está na média.

#include <iostream>

using namespace std;

int main()
{
    int mediaTurma;
    float nota[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Digite a nota: ";
        cin >> nota[i];
    }

    cout << "Média da turma: ";
    cin >> mediaTurma;

    float media = (nota[0] + nota[1] + nota[2]) / 3.0;

    if (media < mediaTurma)
    {
        cout << "Aluno abaixo da média da turma.\n";
    }
    else if (media > mediaTurma)
    {
        cout << "Aluno acima da média da turma.\n";
    }
    else 
    {
        cout << "Aluno na média da turma.\n";
    }
    return 0;
}