/* Vetor em c++
Conjnto de elementos - lista
*/

#include <iostream>
using namespace std;
int main() {
    
    int vetor[10] = {1, 2, 3, 4, 5}; //Matriz de 10 espaços porém só está sendo usado 5

    char vetor_2[15] = "Ola mundo"; //Uma string é um conjunto de char, este é um vetor
    char vetor_3[] = "Ola mundo"; //Um vetor sem espaços pré definidos

    for(int i=0; i < 10; i++) //Percorre todos os dados de um vetor
        cout << vetor[i] << endl;
    
    // Imprimindo quantos espaços tem em cada array

    cout << "Tamanho do vetor: " << sizeof(vetor_2) << endl; 
    cout << "Tamanho do vetor: " << sizeof(vetor_2) << endl;

    return 0;
}