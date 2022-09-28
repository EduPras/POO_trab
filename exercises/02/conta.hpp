#ifndef CONTA_HPP
#define CONTA_HPP

#include "titular.hpp"
#include "utils.hpp"

using namespace std;

class Conta {
  protected:
    double saldo;
    const size_t id;
    void verificacao(double s);
    Titular *titular;
  public:
    Conta(double s, Titular* t): saldo(s), titular(t), id(string_hash(this)){};
    ~Conta();
    double sacar(double s);
    void pix(double s, Conta* c);
    void deposito(double s);
    double getSaldo(){ return this-> saldo; };
    void setTitular(Titular *t){
      this->titular = t;
    }
    Titular* getTitular(){ return this->titular; };
    size_t getId(){ return this->id; };
};
#endif
