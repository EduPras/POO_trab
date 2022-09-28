#ifndef ESPECIAL_HPP
#define ESPECIAL_HPP

#include "conta.hpp"
#include "titular.hpp"

class Especial: public Conta {
  private:
    double limite;
  public:
    Especial(double s, Titular* t): Conta(s, t), limite(5) {};
    double sacar(double s) ;
};
#endif
