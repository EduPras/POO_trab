#ifndef ESPECIAL_HPP
#define ESPECIAL_HPP

#include "conta.hpp"

class Especial: public Conta {
  private:
    double limite;
  public:
    Especial(double s): Conta(s), limite(5) {};
    double sacar(double s) ;
};
#endif
