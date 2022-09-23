#include <iostream>
#include "corrente.hpp"
#include "especial.hpp"
#include "simples.hpp"

using namespace std;
int main(){
  Simples s((double)2000.0);
  Especial c((double) 10.0);
  cout << s.getSaldo() << endl; 
  c.pix((double) 7.0, &s);
  cout << "Simples: " << s.getSaldo() << endl <<  
    "Especial: " << c.getSaldo() << endl;
  cout << c.sacar(8.0) << endl;
  cout << c.getSaldo() << endl;
}
