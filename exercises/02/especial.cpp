#include "especial.hpp"
#include <iostream>

using namespace std;
double Especial::sacar(double s) {
  cout << "\nSaque de conta especial...\n";
  try{
    this->verificacao(s-this->limite);
    this->saldo -= s;
    cout << "\tNovo saldo de " << this->getId() 
      << ": R$ " << this->saldo << endl;
    return this->saldo;
  }catch(string s){
    cout << s;
    return 0;
  }
}
