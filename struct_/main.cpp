#include <iostream>
#include <vector>
#include <string>

#include "disciplina.h"
#include "professor.h"
#include "aluno.h"

using namespace std;

int main(){
  Aluno a("Eduardo Prasniewski", 20, "230894", 2021);
  Aluno b("Yuri Zdebski", 19, "1230293", 2021);
  Professor p("Leandro", 30);
  Disciplina d(&p);

  d.students_.push_back(&a);
  d.students_.push_back(&b);

  cout << a.name_ << a.age_ << endl;
  cout << p.name_ << p.age_<< endl;
  list_students(d);
}

//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
