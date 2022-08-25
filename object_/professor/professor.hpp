#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>

using namespace std;

class Professor {
  private:
    string name_, ra_;
    int age_;
  public:
    Professor(string n, int a): 
      name_(n), age_(a) {};
    ~Professor() {};
};

#endif
