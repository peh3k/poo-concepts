// Struct / Estrutura em C++ 
// Basicamente struct é um armazém onde se pode alocar varios tipos de variáveis e
// acessa-las por uma única variável

#include <iostream>
#include <string>

using namespace std;

struct cliente { // Variável Cliente

    // Variáveis dentro da variável Cliente
    string nome; 
    int id;
    int idade;
} meu_cliente[10]; // Inicialização da struct (Nessa caso tem 10 variáveis, pode ter só uma também, sem os colchetes)
                  // A inicialização da struct pode ser no final dela ou dentro do main ex: 
                                                                    /* int main() {
                                                                        
                                                                        cliente meu_cliente;

                                                                        return 0;
                                                                    }*/

int main() {

    // Entrada de dados no cliente zero

    cout << "Insira o ID do cliente: " << endl;
    cin >> meu_cliente[0].id; 

    cout << "Insira o nome do cliente: " << endl;
    cin >> meu_cliente[0].nome;

    cout << "Insira a idade do cliente: " << endl;
    cin >> meu_cliente[0].idade;

    // Imprime os dados do cliente zero

    cout << "Nome: " << meu_cliente[0].nome << endl; 
    cout << "Id: " << meu_cliente[0].id << endl;
    cout << "Idade: " << meu_cliente[0].idade << endl;

    return 0;
}