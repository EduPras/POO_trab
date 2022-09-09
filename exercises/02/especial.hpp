#ifndef ESPECIAL_HPP
#define ESPECIAL_HPP

#include "conta.hpp"

class Especial: public Conta {
  private:
    double limite;
  public:
    double sacar(double s) override;
};
#endif
