#include "conta.hpp"
#include <sstream>
#include <iostream>

using namespace std; 

bool Conta::verificacao(double s){
  stringstream ss;
  if(s > this->saldo){
    ss << "Saldo inválido\n";
    throw ss.str();
    return false;
  }
  return true;
}

void Conta::pix(double s, Conta* c){
  if(this->verificacao(s)){
    cout << "Pix enviado\n";
    c->saldo += s;
    this->saldo -= s;
  }
}

double Conta::sacar(double s){
  if(this->verificacao(s)){
    this->saldo -= s;
    return this->saldo;
  }else return 0;
}

void Conta::deposito(double s){
  this->saldo += s;
}
