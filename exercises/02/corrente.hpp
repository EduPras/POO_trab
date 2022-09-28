#ifndef CORRENTE_HPP
#define CORRENTE_HPP

#include "conta.hpp"
#include "titular.hpp"

class Corrente: public Conta {
  static double taxaDeJurosAnual;
  public:
    Corrente(double s, Titular* t): Conta(s,t) {};
    void calcularRendimentoMensal();
    static void modificarTaxaDeJuros(int x);
};

#endif
