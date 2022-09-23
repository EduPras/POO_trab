#ifndef CONTA_HPP
#define CONTA_HPP

class Conta {
  protected:
    double saldo;
    bool verificacao(double s);
  public:
    Conta(double s): saldo{s}{};
    double sacar(double s);
    void pix(double s, Conta* c);
    void deposito(double s);
    double getSaldo(){ return this-> saldo; };
};
#endif
