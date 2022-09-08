#include<iostream>

#include "pessoa.hpp"
#include "aluno.hpp"
#include "professor.hpp"
#include "tecnico.hpp"
#include "turma.hpp"

int main(){
  Aluno a;
  Turma t;
  Professor p;
  p.setNome("Afonso");
  a.setNome("Eduardo Prasniewski");
  a.setEmail("aa");

  t.incluirAluno(&a);
  t.getAlunos();
  std::cout << a.getNome() << std::endl;
}
