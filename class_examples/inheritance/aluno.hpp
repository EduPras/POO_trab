#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "pessoa.hpp"
#include <vector>
#include "disciplina.hpp"

using namespace std;

class Aluno: public Pessoa {
  private:
    vector<string> disciplinas;
  public:
    void inserirDisciplinas(string d){
      disciplinas.push_back(d);
    }
};
#endif
