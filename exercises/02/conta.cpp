#include "conta.hpp"
#include <sstream>
void Conta::verificacao(double s){
  stringstream ss;
  if(s > this->saldo){
    ss << "Saldo inválido\n";
    throw ss.str();
    return false
  }
  return true;
}

void Conta::pix(double s){
  if(this->verificacao(s)){
    std::cout << "Pix enviado\n";
  }
}

double Conta::sacar(double s){
  if(this->verificacao(s)){
    this->saldo -= s;
    return this->saldo;
  }
}

void Conta::deposito(double s){
  this->saldo += s;
}
