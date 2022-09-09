#include "corrente.hpp"

double Corrente::calcularRendimentoMensal(){
  double acrescimo = this->saldo*(this->taxaDeJurosAnual/12);
  return this->saldo+acrescimo;
}

static void Corrente::modificarTaxaDeJuros(int x){
  this->taxaDeJurosAnual = x;
}
