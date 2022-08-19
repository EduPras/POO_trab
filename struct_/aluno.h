#ifndef ALUNO_H
#define ALUNO_H

#include <string>

using namespace std;

typedef struct Aluno {
  string name_, ra_;
  int age_, entrance_year_;
  Aluno(string n, int a, string ra, int ey): 
    age_(a), name_(n), ra_(ra), entrance_year_(ey) {};
  ~Aluno() {};
} Aluno;

#endif
