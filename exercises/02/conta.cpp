#include "conta.hpp"
#include <ostream>
#include <sstream>
#include <iostream>

using namespace std; 

Conta::~Conta(){
  cout << "Conta " << this->id << " foi encerrada.\n";
}
void Conta::verificacao(double s){
  cout << "Verificando...\n";
  stringstream ss;
  if(s > this->saldo){
    ss << "Saldo inválido" <<
      "\n\t Salto atual: " << this->saldo <<
      "\n\t Valor extrapolado: " << s-this->saldo << endl;
    throw ss.str();
  }
}

void Conta::pix(double s, Conta* c){
  cout << "\nIniciando transação [pix]...\n";
  try{
    this->verificacao(s);
    cout << "Pix enviado de "
      << this->id << " para " << c->id << endl;
    c->saldo += s;
    this->saldo -= s;
    cout 
      << "\tSaldo de " << this->id 
      << ": R$ " << this->saldo << endl
      << "\tSaldo de " << c->getId() 
      << ": R$ " << c->getSaldo() << "\n\n";
  }catch(string s){
    cout << s;
  }
}

double Conta::sacar(double s){
  cout << "\nIniciando saque...\n";
  try{
    this->verificacao(s);
    this->saldo -= s;
  }catch(string s){
    cout << s;
  }
  return this->saldo;
}

void Conta::deposito(double s){
  cout << "\nR$ " << s << " depositado na conta "
    << this->id << endl;
  this->saldo += s;
}
