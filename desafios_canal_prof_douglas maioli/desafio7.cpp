/* 
Usuário informa as dimensões de uma matriz, e os elementos de duas matrizes (ambas com mesmas dimensões) e o Algoritmo faz a soma entre essas duas matrizes
*/

#include <iostream>

using namespace std;

int main(){

  int l, c;

  cout << "Quantidade de linhas: ";
  cin >> l;
  cout << "Quantidade de colunas: ";
  cin >> c;

  float matriz1[l][c], matriz2[l][c];

  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      cout << "Matriz 1[" << i+1 << "]" << "[" << j+1 << "]: ";
      cin >> matriz1[i][j];
    }
  }

  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      cout << "Matriz 2[" << i+1 << "]" << "[" << j+1 << "]: ";
      cin >> matriz2[i][j];
  }
}

cout << "\nMatriz 1\n";
  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      cout << "[" << matriz1[i][j] << "]";
    }
    cout << endl;
  }

  cout << "\nMatriz 2\n";

  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      cout << "[" << matriz2[i][j] << "]";
  }
  cout << endl;
}

int matrizsoma[l][c];

// somando as matrizes 1 e 2
  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
  }
}

cout << "---- Resultado da soma das matrizes ----\n";

  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
    cout << "[" << matrizsoma[i][j] << "]";
  }
  cout << endl;
}

  return 0;
}