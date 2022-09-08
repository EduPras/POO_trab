
#include "aluno.hpp"

#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include "professor.hpp"
#include <vector>

class Disciplina {
  private:
    string nome;
    Professor* professor;
    vector<Aluno*> alunos;
  public:
    void setProfessor(Professor *){
      this->professor = p;
    }
    Professor* getProfessor(){
      return this->professor;
    }

    void inserirAluno( Aluno* a ){
      this->alunos.push_back(a);
    }
    void listarAlunos(){
      vector<Aluno*>::iterator it;
      for(it = this->alunos.begin(); it != this->alunos.end(); it++)
        std::cout << (*it)->getNome() << endl;
    }
};
#endif
