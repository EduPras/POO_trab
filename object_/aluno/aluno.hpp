#ifndef ALUNO_HPP
#define ALUNO_HPP

#include <string>
#include <vector>

using namespace std;

class Aluno {
  private:
    string name_, ra_;
    int age_, entrance_year_;
  public:
    Aluno(string n, int a, string ra, int ey): 
      age_(a), name_(n), ra_(ra), entrance_year_(ey) {};
    ~Aluno() {};
    string getName() { return this->name_; };
};

#endif
