#include "disciplina.hpp"
#include <iostream>

using namespace std;

void Disciplina::insert_student(Aluno* a){
  this->students_.push_back(a);
};

void Disciplina::list_students(){
  vector<Aluno*>::iterator it;
  for(it = this->students_.begin(); it != this->students_.end(); it++){
    cout << "\tAluno: " << (*it)->getName() << endl;
  }
};
