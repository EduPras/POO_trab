#ifndef CONTA_HPP
#define CONTA_HPP

class Conta {
  protected:
    double saldo;
    void pix(double s);
    bool verificacao(double s);
  public:
    double sacar(double s);
    void deposito(double s);
};
#endif
