#include "especial.hpp"
#include <iostream>

using namespace std;
double Especial::sacar(double s) {
  cout << "\tSaldo: " << this->getSaldo()
    << "\n\tS: " << s << "\n\tLimite: "
    << this->limite << endl;
  if(s <= this->saldo + this->limite){
    this->saldo -= s;
    return this->saldo;
  } else return 0;
}
