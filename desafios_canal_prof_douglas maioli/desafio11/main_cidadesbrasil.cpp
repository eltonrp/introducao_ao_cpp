// Cria objetos e executa o programa principal

#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

int main(){
    cidadesbrasil campinas(1774, 1214000);
    cout << "\n--- Campinas ---\n";
    cout << "Ano de Fundacao: " << campinas.get_ano() << endl;
    cout << "Populacao: " << campinas.get_populacao() << endl;
    
    cout << "\n--- Botucatu ---\n";
    cidadesbrasil botucatu(1843, 144820);
    cout << "Ano de Fundacao: " << botucatu.get_ano() << endl;
    botucatu.pop_increment(5);
    cout << "Populacao: " << botucatu.get_populacao() << endl;
    cout << "\n";

    system("pause");

    return 0;
}