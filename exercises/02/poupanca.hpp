#ifndef CORRENTE_HPP
#define CORRENTE_HPP

#include "conta.hpp"
#include "titular.hpp"

class Poupanca: public Conta {
  static double taxaDeJurosAnual;
  public:
    Poupanca(double s, Titular* t): Conta(s,t) {};
    void calcularRendimentoMensal();
    static void modificarTaxaDeJuros(int x);
};

#endif
