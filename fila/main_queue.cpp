#include <iostream>
#include "queue.h"

using namespace std;

int main() {

    Queue queue;
    TypeItem item;
    int opcao;
    cout << "Programa gerador de filas:\n";

    do{
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a fila!\n";
        cin >> opcao;
        if (opcao == 1){
            cout << "Digite o elemento a ser inserido na fila!\n";
            cin >> item;
            queue.enqueue(item);
        } else if (opcao == 2){
            item = queue.dequeue();
            cout << "O elemento removido e: " << item << endl;
        } else if (opcao == 3){
            queue.print();
        }
    } while (opcao != 0);

    
    return 0;
}