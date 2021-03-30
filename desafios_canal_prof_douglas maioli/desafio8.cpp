/* 
Cria um Algoritmo que o usuário informa o tamnaho de um vetor e seus elementos,
devendo imprimir este vetor e logo após deletá-lo e perguntar ao usuário se ele 
quer imprimir outro vetor
*/
#include <iostream>

using namespace std;

int main(){
// define as variáveis
    int tamanho;
    int *vetor = new int [tamanho]; // cria um vetor com alocação dinâmica
    char continuar;

// cria um laço, que primeiro executa as instruções e depois verifica condicional
    do{

// recebe o tamanho do vetor
        cout << "Digite o tamanho do vetor: "; 
        cin >> tamanho;

// recebe os valores do vetor
        for(int i=0; i<tamanho; i++){ 
            cout << "Digite o elemento "<< i+1 << ": ";
            cin >> vetor[i];
        }

// imprime os valores do vetor
        cout << "Vetor -> ";
        for(int i=0; i<tamanho; i++){ 
            cout << vetor[i] << " ";
        }

        cout << endl;

// deleta o vetor após sua impressão
        delete [] vetor; 

        cout << "Deseja imprimir outro vetor [S/N]: ";
        cin >> continuar;

    } //end do

// verifica a condicional para continuar o laço
        while(continuar == 'S' || continuar == 's');

    return 0;
} // end main