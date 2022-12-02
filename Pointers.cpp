// Pointers ou ponteiros em C++
// É uma variável que armazena o endereço de memória de um objeto

#include <iostream>

using namespace std;

/*
Memória HEAP (tipo árvore)
(pointer)

Memória STACK (tipo fixo)
numero = 5;
*pointer

*/

int main() {

    int numero = 5;
    int *pointer; // Declarando um pointer
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    pointer = &numero; // Variável pointer recebe endereço da memória onde está alocada a variável numero

    cout << "Local da memória da variável: " << &numero << endl;
    cout << "Local da memória do pointer: " << pointer << endl;
    cout << "Valor do pointer: " << *pointer << endl;


    return 0;
}
