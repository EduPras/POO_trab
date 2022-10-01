#include <iostream>
#include "poupanca.hpp"
#include "especial.hpp"
#include "simples.hpp"
#include "titular.hpp"
#include <vector>

/*
 * Autor: Eduardo Prasniewski
 * Data: 28/09/2022
 * 
 * Comando para compilar no linux:
 * g++ -c conta.cpp poupanca.cpp especial.cpp simples.cpp utils.cpp main.cpp
 * g++ conta.o poupanca.o especial.o simples.o utils.o main.o -o run
 * ./run
*/
using namespace std;

int main(){
  // Declarando titulares e contas bancárias
  vector<Titular*> titulares = {
    new Titular("Eduardo", "20198302", 20),
    new Titular("Maria", "2198221", 78),
    new Titular("Hugo", "9830210", 26),
    new Titular("Beatriz", "892130", 24)
  };
  Poupanca *c1 = new Poupanca(2000.0, titulares[0]);
  Poupanca *c2 = new Poupanca((double)3000.0, titulares[1]); 
  Simples *s1 = new Simples(50.0, titulares[2]);
  Especial *e1 = new Especial(300.0, titulares[3]);
  
  // Enviando um pix a partir de uma conta
  // e extrapolando seu valor
  e1->pix(301.0, s1);
  // Agora um valor plausível
  e1->pix(300.0, s1);

  // Realizando um saque com conta especial,
  // que possue limite = 5
  e1->sacar(7);
  e1->sacar(5);

  // Realizando depósito
  e1->deposito(3005);

  // Calculando exemplo especificado no PDF
  c1->calcularRendimentoMensal();
  c2->calcularRendimentoMensal();
  Poupanca::modificarTaxaDeJuros(8);
  c1->calcularRendimentoMensal();
  c2->calcularRendimentoMensal();

  // Mostrando os proprietários das contas
  cout << endl 
    << c1->getId() << " pertence a " << c1->getTitular()->getNome() << endl
    << c2->getId() << " pertence a " << c2->getTitular()->getNome() << endl
    << s1->getId() << " pertence a " << s1->getTitular()->getNome() << endl
    << e1->getId() << " pertence a " << e1->getTitular()->getNome() << endl;

  // Deletando contas
  cout << endl;
  delete c1;
  delete c2;
  delete s1;
  delete e1;

  cout << endl;
  for(int i = 0; i < 4; i++)
    delete titulares[i];
}
