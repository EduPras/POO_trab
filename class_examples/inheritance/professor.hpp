#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <vector>
#include "pessoa.hpp"
using namespace std;

class Professor: public Pessoa {
  private:
    bool dedicacaoExclusiva;
    vector<string> turmas;
  public:
    void setDedicacaoExclusiva(bool d){
      this->dedicacaoExclusiva = d;
    }
    bool getDedicacaoExclusiva(){
      return this->dedicacaoExclusiva;
    }
    void inserirTurmas(string t){
      this->turmas.push_back(t);
    }
};
#endif
