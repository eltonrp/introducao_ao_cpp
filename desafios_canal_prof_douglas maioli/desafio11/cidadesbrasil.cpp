// Definição dos métodos da classe

#include <iostream>
#include "cidadesbrasil.h"

using namespace std;

cidadesbrasil::cidadesbrasil(int a=0, int p=0){
    ano = a;
    populacao = p;
}
void cidadesbrasil::set_ano(int a){
    ano = a;
}
int cidadesbrasil::get_ano(){
    return ano;
}
void cidadesbrasil::set_populacao(int p){
    populacao = p;
}
int cidadesbrasil::get_populacao(){
    return populacao;
}
void cidadesbrasil::pop_increment(int p){
    populacao += p;
}
