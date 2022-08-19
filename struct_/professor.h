#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>

using namespace std;

typedef struct Professor {
  string name_, ra_;
  int age_;
  Professor(string n, int a): 
    name_(n), age_(a) {};
  ~Professor() {};
} Professor;

#endif
