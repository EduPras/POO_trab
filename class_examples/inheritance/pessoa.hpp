#ifndef PESSOA_HPP 
#define PESSOA_HPP 

#include <vector>
using namespace std;

class Pessoa {
  protected:
    string nome;
    string email;
  public:
    void setEmail(string e){ this->email = e; }
    string getEmail(){ return this->email; }

    void setNome(string n){ this->nome = n; };
    string getNome(){ return this->nome; }

};
#endif
