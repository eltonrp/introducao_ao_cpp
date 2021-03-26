/*
Crie um algoritmo que calcula a média de 3 notas informadas pelo usuário e compara com a média da turma, também informada por ele
*/

#include <iostream>

using namespace std;

int main(){
  float n1;
  float n2;
  float n3;
  float media_turma;
  
  cout << "Nota 1: " << endl;
  cin >> n1;
  cout << "Nota 2: " << endl;
  cin >> n2;
  cout << "Nota 3: " << endl;
  cin >> n3;
  cout << "Media da turma : " << endl;
  cin >> media_turma;
  
  float media=(n1+n2+n3)/3;

  if(media > media_turma){
    cout << "Aluno acima da media, parabens!" << endl;
  } else if(media == media_turma){
    cout << "Aluno na media, continue assim" << endl;
  } else {
    cout << "Aluno abaixo da media, precisa melhorar" << endl;
  } 

  return 0;
}
