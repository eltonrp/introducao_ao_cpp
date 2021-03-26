/*Algoritmo que o usuário informa renda de 5 famílias, tira a média e informa se cada família está acima, abaixo ou na média */

#include <iostream>

using namespace std;

int main(){

  float familias[5];
  float soma;
  float media;

  for(int i=0; i<5; i++){
    cout << "Familia " << i+1 << ": ";
    cin >> familias[i];
  }

  for(int i=0; i<5; i++){
    soma += familias[i];
  }

  media = soma / 5;
  cout << "\n--------------\n";
  cout << "Media de " << media << endl;
  cout << "--------------\n";

  for(int i=0; i<5; i++){
    cout << "Familia " << i+1 << " gastou: " << familias[i];
    if(familias[i] > media){
      cout << " ---> Esta acima da media\n";
    } else if(familias[i] == media){
      cout << " ---> Esta na media\n";
    } else {
      cout << " ---> Esta abaixo da media\n";
    }
    cout << endl;
  }
  system("pause");
  return 0;
}