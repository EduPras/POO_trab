#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <string>
#include <vector>
#include "../professor/professor.hpp"
#include "../aluno/aluno.hpp"

using namespace std;

class Disciplina {
  private:
    Professor* professor_;
    vector<Aluno*> students_;

  public:
    Disciplina(Professor * p): 
      professor_(p) {};
    ~Disciplina() {};
    void list_students();
    void insert_student(Aluno* a);
};

#endif
