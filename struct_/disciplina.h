#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "professor.h"
#include "aluno.h"

using namespace std;

typedef struct Disciplina {
  Professor* professor_;
  vector<Aluno*> students_;
  Disciplina(Professor * p): 
    professor_(p) {};
  ~Disciplina() {};
} Disciplina;

void list_students(Disciplina& d){
  vector<Aluno*>::iterator it;
  for(it = d.students_.begin(); it != d.students_.end(); it++){
    cout << "\tAluno: " << (*it)->name_ << endl;
  }
}
#endif
