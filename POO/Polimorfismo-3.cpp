/* Polimorfismo exemplo - POO
Quando se tem a mesma função para duas ou mais classes, utiliza-se o polimorfismo
*/
#include <string>
#include <iostream>

using namespace std;

class Pessoa {
    protected:
        string nome;
        int id;
    public:
        Pessoa(string _nome, int _id);
        ~Pessoa();
        virtual void ExibirPessoa(); // 'virtual' para a classe filha sobrescrever o mesmo método
};

Pessoa::Pessoa(string _nome, int _id) {
    nome = _nome;
    id = _id;
}

void Pessoa::ExibirPessoa() {
    cout << "Nome: " << nome << endl;
    cout << "Id: " << id << endl;
}

Pessoa::~Pessoa() {
    cout << "Classe destruída";
}

class Cliente : public Pessoa {
    private:
        int salario;
    public:
        Cliente(string _nome, int _id, int _salario);
        void ExibirPessoa();

};

Cliente::Cliente(string _nome, int _id, int _salario) : Pessoa(_nome, _id) {
    salario = _salario;
}

/* Método sem polimorfismo

void Cliente::ExibirCliente() {
    cout << "Nome: " << nome << endl;
    cout << "Id: " << id << endl;
    cout << "Salário: " << salario << endl;} 
*/


//Método com Polimorfismo

void Cliente::ExibirPessoa() { // Sobrescreveu o método da classe pai (ExibirPessoa)

    Pessoa::ExibirPessoa(); // Método da classe pai (código mais limpo)
    cout << "Salário: " << salario << endl;

}

int main() {

    Cliente cliente = Cliente("Davi", 23, 1200);
    cliente.ExibirPessoa(); // Ao chamar o método da classe filha (cliente), a própria classe filha irá chamar o método da classe pai

    return 0;
}