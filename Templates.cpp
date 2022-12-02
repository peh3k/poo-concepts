// Templates em C++
// Quando você quer criar uma função que receba como parâmetro um tipo de dado qualquer

#include <iostream>


using namespace std;

// Protótipo da função vem antes do main
template <class TIPODADO> // Tipo de dado qualquer
TIPODADO funcao(TIPODADO num);

int main() {

    cout << funcao(4) << endl;
    cout << funcao(4.65) << endl;

    return 0;
}

// Implementação da função após o main
template <class TIPODADO>
TIPODADO funcao(TIPODADO num) {

    return ++num; // Retorn o número somado a ele mesmo
}