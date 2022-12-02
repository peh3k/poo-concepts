/* Herança em C++
Quando as classes filhas herdam varáveis das classes pai
*/
#include <string>
#include <iostream>

using namespace std;

class Pessoa { //Objeto Pessoa (pai)
    protected: //Assim os objetos filhos terão acesso a todas as variáveis
        string nome;
        int idade;
    public:
        Pessoa(string _nome, int _idade);
        ~Pessoa();
        void ExibirPessoa();
};

Pessoa::Pessoa(string _nome, int _idade) {
    nome = _nome;
    idade = _idade;
}

Pessoa::~Pessoa() {
    cout << "Classe Destruída";
}

void Pessoa::ExibirPessoa() {
    cout << "Exibir pessoa: " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}

class Cliente : public Pessoa { //Objeto Cliente (filha), está puxando dados do pai (Pessoa)
    private:
        float salario;
    public:
        Cliente(string _nome, int _idade, float _salario); //Construtor
        void ExibirCliente();
};
                                                          // Os mesmos dados carregados no construtor "Cliente" serão carregados juntamente no método "Pessoa" a fim de agilizar o processo
Cliente::Cliente(string _nome, int _idade, float _salario) : Pessoa(_nome, _idade) {
    salario = _salario;
}

void Cliente::ExibirCliente() {
    cout << "Cliente: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Salário: " << salario << endl;
}

int main(){

    Cliente cliente = Cliente("Pedro", 19, 6800); //Seta dados no Cliente(nome, idade e salário) e no Pessoa (nome, idade) 

    cliente.ExibirCliente();

    return 0;
}