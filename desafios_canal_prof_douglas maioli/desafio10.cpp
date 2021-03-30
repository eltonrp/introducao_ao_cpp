/*
Cria um Algoritmo que tenha uma função que recebe 2 ponteiros e troca 
o valor de referência entre os dois
*/
#include <iostream>

using namespace std;

void troca_valor_referencia(int* &p1, int* &p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){

    int *point1 = new int;
    int *point2 = new int;
    cout << "Digite um valor para o Ponteiro 1: ";
    cin >> *point1;
    cout << "Digite um valor para o Ponteiro 2: ";
    cin >> *point2;
    cout << "Voce digitou os seguintes valores:\n";
    cout << "Ponteiro 1: " << point1 << " " << *point1 << endl;
    cout << "Ponteiro 2: " << point2 << " " << *point2 << endl;
    cout << "Vamos trocar os valores de referencia...\n";
    troca_valor_referencia(point1, point2);
    cout << "Agora o Ponteiro 1 = " << point1 << " " << *point1 << endl;
    cout << "Agora o Ponteiro 2 = " << point2 << " " << *point2 << endl;


    return 0;
}