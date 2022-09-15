#include "especial.hpp"

double Especial::sacar(double s) {
  if(s > this->saldo+(this->saldo*this->limite)){
    this->saldo -= s;
    return this->saldo;
  } else return 0;
}
