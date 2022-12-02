// Objeto, classe, encapsulamento, Get e Set, destrutor, construtor em C++

#include <string>
#include <iostream>

using namespace std; //Abreviar o uso do std::...

class Pessoa { // Objeto/classe pessoa
    private: //Tudo Abaixo é privado (não é acessível fora da classe)
        string name;
        int id;
        int idade;

    public: //Tudo abaixo é público (é acessível fora da classe)
        Pessoa(string _name, int _id, int _idade); //Construtor (não possui um tipo de dado, void, int, float etc.), precisa ter o mesno nome do objeto
        ~Pessoa(); // Destrutor, o uso dessa função é "matar" a classe depois de usada

        //Esboço dos métodos para setar e pegar dados, Set e Get
        void SetName(string _name); 
        string GetName(); 
        void SetId(int _id);
        int GetId();
        void SetIdade(int idade);
        int GetIdade();
};

//Corpo das funções declaradas no objeto "Pessoa", antes era o esboço, agora é o corpo(convenção de programação em c++),
//porém funciona também se colocar o corpo das funções dentro da classe

Pessoa::Pessoa(string _name, int _id, int _idade) { 
    name = _name;
    id = _id;
    idade = _idade;
}
void Pessoa::SetName(string _name) {
    name = name;

}
string Pessoa::GetName() {
    return name;
}
void Pessoa::SetId(int _id) {
    id = _id;
}
int Pessoa::GetId() {
    return id;
}
void Pessoa::SetIdade(int _idade) {
    idade = _idade;
}
int Pessoa::GetIdade() {
    return idade;
}
Pessoa::~Pessoa() {
    cout << "Classe destruída" << endl; //Destrutor
}
//Início do código propriamente dito
int main() {
    Pessoa pessoa = Pessoa("Pedro", 50, 19); //Setando dados para o objeto "Pessoa" através do método construtor

    
    cout << pessoa.GetId(); //Pegando somente o ID da pessoa Pedro

    pessoa.~Pessoa(); //Destruindo a classe

    return 0;
}