/*
Crie uma função que calcula o fatorial de um número inteiro passado pelo usuário
*/

#include <iostream>

using namespace std;

double fatorial(int n){
  double resultado = n;
  for (int i=1; i<n; i++){
    resultado *= i;
  }
  return resultado;
}

int main(){
  
  int n;
  while(true){
  cout << "Digite um numero inteiro ou [0] para encerrar: ";
  cin >> n;
  if(n == 0){
    break;
  } // end if
  double resultado = fatorial(n);
  cout << n << "! = " << resultado << endl;
    
  } // end while

  return 0;
} // end main