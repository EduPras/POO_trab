#include "poupanca.hpp"
#include <iostream>

using namespace std;

double Poupanca::taxaDeJurosAnual = 0.06;

void Poupanca::calcularRendimentoMensal(){
  cout << "\nCalculando rendimento mensal de " <<
    this->id << " ...\n";
  double acrescimo = this->saldo*(this->taxaDeJurosAnual/(double)12);
  this->saldo += acrescimo;
  cout << "\tNovo saldo: R$: " << this->saldo << endl;
}

void Poupanca::modificarTaxaDeJuros(int x){
  taxaDeJurosAnual = (double)x/100;
  cout << "\nRecalculando taxa de juros anual: \n\tNova taxa: "
    << taxaDeJurosAnual << "%\n";
}
