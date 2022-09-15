#ifndef CORRENTE_HPP
#define CORRENTE_HPP

#include "conta.hpp"

class Corrente: public Conta {
  static int taxaDeJurosAnual;
  public:
    double calcularRendimentoMensal();
    void modificarTaxaDeJuros(int x);
};

#endif
