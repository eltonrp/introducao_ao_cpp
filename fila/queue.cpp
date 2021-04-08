#include <iostream>
#include "queue.h"

using namespace std;

Queue::Queue(){
    first = 0;
    last = 0;
    structure = new TypeItem[max_itens];
}
Queue::~Queue(){
    delete [] structure;
}
bool Queue::isFull(){
    return(last - first == max_itens);
}
bool Queue::isEmpty(){
    return(first == last);
}
void Queue::enqueue(TypeItem item){
    if(isFull()){
        cout << "A Fila esta cheia!!";
    }
    else{
        structure[last % max_itens] = item;
        last++;
    }
}
TypeItem Queue::dequeue(){
    if(isEmpty()){
        cout << "A fila esta vazia!!\n";
        cout << "Nenhum item removido\n";
        return 0;
    }
    else{
        first++;
        return(structure[(first-1) % max_itens]);
    }
}
void Queue::print(){
    cout << "Fila: [ ";
    for(int i=first; i<last; i++){
        cout << structure[i % max_itens] <<" ";
    }
    cout << "]\n";
}