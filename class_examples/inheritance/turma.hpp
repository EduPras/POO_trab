#ifndef TURMA_HPP
#define TURMA_HPP

#include "aluno.hpp"
#include "professor.hpp"

class Turma {
  private:
    string nome;
    vector<Aluno*> alunos;
  public:
    void incluirAluno(Aluno* a){
      this->alunos.push_back(a);
    }
    void getAlunos(){
      vector<Aluno*>::iterator it;
      for(it = alunos.begin(); it != alunos.end(); it++){
        std::cout << (*it)->getNome() << endl;
      }
    }

    void setNome(strint n){
      this->nome = n;
    }
    string getNome(){
      return this->nome;
    }
#endif
