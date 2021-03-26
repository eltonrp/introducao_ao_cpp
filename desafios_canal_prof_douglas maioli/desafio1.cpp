/*
Dada a função f(x)=x²-3x+5,
Crie um algoritmo que calcule f(a), em que a é um número real informado pelo usuário
*/

#include <iostream>

using namespace std;

float f(float x){
  float resultado = x*x - 3*x + 5;
  return resultado;
}

int main(){
  float x;
  cout << "Digite um valor real para x: " << endl;
  cin >> x;
  float resultado = f(x);
  cout << "O resultado da funcao para x = " << x << " e: " << resultado << endl;

  return 0;
}