#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack(){
    length = 0;
    len_destruct = 0;
    structure = new ItemType[max_itens];
    destructure = new ItemType[max_itens];
}
Stack::~Stack(){
    delete [] structure;
}
bool Stack::isFull(){
    return(length == max_itens);
}
bool Stack::isEmpty(){
    return(length == 0);
}
void Stack::print(){
    for(int i=0; i<length; i++){
        cout << structure[i];
    }
}
void Stack::unprint(){
    for(int i=0; i<length; i++){
        cout << destructure[i];
    }
}
void Stack::push(ItemType item){
    if(isFull()){
        cout << "A Pilha está cheia!\n";
    } 
    else{
        structure[length] = item;
        length++;
    }
}
ItemType Stack::pop(){
    if(isEmpty()){
        cout << "A pilha está vazia!\n";
        return 0;
    }
    else{
        length--;
        destructure[len_destruct] = structure[length];
        len_destruct++;
        return structure[length];
    }
}
bool Stack::isPalindrom(){
    for(int i=0; i<len_destruct; i++){
        if(structure[i] != destructure[i]){
            return(false);
        }
    }
    return(true);
}