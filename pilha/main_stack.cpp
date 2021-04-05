#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    Stack pilha;
    ItemType item;
    cout << "Digite uma string [sem espacos e maiusculas]: ";
    cin.get(item);
    while(item != '\n'){
        pilha.push(item);
        cin.get(item);
    }
    cout << "String digitada: ";
    pilha.print();
    cout << endl;
    cout << "String desempilhada: ";
    while(!pilha.isEmpty()){
       cout << pilha.pop();
    }
    if(pilha.isPalindrom()){
        cout << "\nEssa string e um Palindromo\n";
    }else{
        cout << "\nNao e um Palindromo\n";
    }
    return 0;
}