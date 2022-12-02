// Funções em C++, Parâmetros, Função recursiva

#include <iostream>
#include <stdarg.h>

using namespace std;

// Protótipo das funções

// Função por passage de parâmetros ilimitados
int soma(const int contador, ...); //"const" é para definir um parâmetro fixo, e os três pontos
                                    //são os argumentos ilimitados


// Função recursiva 
int fatorial(int n);

int somaum(int *numero);


int main() {

    cout << soma(3, 2, 6, 7) << endl; // O primeiro argumento é a quantidade de argumentos que será passado


    int n = 6;
    cout << "Fatorial de " << n << ": " << fatorial(n) << endl;

    int numero = 9;
    cout << "Número +1: " << somaum(&numero) << endl; // Passando como parâmetro o local da memória da variável numero

    return 0;
}

// Implementação das funções

int soma(const int contador, ...) {

    va_list lista; // Lista que contém os parâmetros (va_list = tipo de dado)
    int total_soma = 0;

    va_start(lista, contador); // Deve ser usado antes do va_arg
    for(int i=0; i < contador; i++) { // Percorre todos os argumentos da lista
        total_soma += va_arg(lista, int); // Soma o argumento atual da lista com o total_soma
    }
    va_end(lista); // Deve ser usado no final da operação pois está junto com o va_start
    return total_soma;
}

int fatorial(int n) {
    if(n == 1) 
        return n;
    
    return fatorial(n - 1) * n; // Função chama ela mesma porém com decremento
    
}

int somaum(int *numero) { // Pegando o VALOR do endereço da memória passada como parâmetro
    ++*numero; // Incrementando +1 (o ++ tem q vir antes em caso de ponteiro)
    return *numero;
}