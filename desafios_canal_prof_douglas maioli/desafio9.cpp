/*
Cria um Algoritmo que pede duas idades ao usuário e calcula a média entre elas. Neste exercício deve-se usar apenas ponteiros
*/

#include <iostream>

using namespace std;

int main(){

// cria os ponteiros
    int *idade1 = new int;
    int *idade2 = new int;
    float *media = new float;

// usuário entra com os valores
    cout << "Digite a idade da primeira pessoa: ";
    cin >> *idade1;
    cout << "Digite a idade da segunda pessoa: ";
    cin >> *idade2;

// calcula a média em números reais
    *media = (float(*idade1) + float(*idade2)) / 2;

    cout << "A média das duas idades e: " << *media << " anos" << endl;

    return 0;
}