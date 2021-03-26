#include <iostream>

using namespace std;

int main(){

  int l, c;

  cout << "Numero de linhas: ";
  cin >> l;
  cout << "Numero de colunas: ";
  cin >> c;

  int matriz1[l][c];

  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      cout << "Matriz 1[" << i+1 << "]" << "[" << j+1 << "]: ";
      cin >> matriz1[l][c];
    }
  }

  return 0;
}