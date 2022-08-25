#include <iostream>
#include <vector>
#include <string>

#include "disciplina/disciplina.hpp"
#include "professor/professor.hpp"
#include "aluno/aluno.hpp"

using namespace std;

int main(){
  Aluno a("Eduardo Prasniewski", 20, "230894", 2021);
  Aluno b("Yuri Zdebski", 19, "1230293", 2021);
  Professor p("Leandro", 30);
  Disciplina d(&p);

  d.insert_student(&a);
  d.insert_student(&b);
  d.list_students();
}

//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
