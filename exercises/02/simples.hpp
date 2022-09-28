#ifndef SIMPLES_HPP
#define SIMPLES_HPP

#include "conta.hpp"
#include "titular.hpp"

class Simples: public Conta {
  public:
    Simples(double s, Titular* t): Conta(s, t) {};

};

#endif
