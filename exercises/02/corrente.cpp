#include "corrente.hpp"

int Corrente::taxaDeJurosAnual = 1;

double Corrente::calcularRendimentoMensal(){
  double acrescimo = this->saldo*(this->taxaDeJurosAnual/12);
  return this->saldo+acrescimo;
}

void Corrente::modificarTaxaDeJuros(int x){
  this->taxaDeJurosAnual = x;
}
