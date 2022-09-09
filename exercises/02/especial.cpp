#include "especial.hpp"

double Especial::Sacar(double s) override {
  if(s > this->saldo+(this->saldo*this->limite)){
    return this->saldo;
  }
}
