#ifndef TITULAR_HPP
#define TITULAR_HPP

#include <string>
#include <iostream>

using namespace std;

class Titular {
  private:
    string nome, cpf;
    int idade;
  public:
    Titular(string n, string c, int i): 
      nome(n), cpf(c), idade(i) {};
    ~Titular(){
      cout << "Titular " << this->nome << " deletado\n";
    }
    // getters e setters
    string getNome() { return this->nome; };
    string getCpf() { return this->cpf; };
    int getIdade() { return this->idade; };

    void setNome( string n) { this->nome = n; };
    void setIdade( int i ) { this->idade = i; };
    void setCpf( string c ) { this->cpf = c; };
};
#endif
