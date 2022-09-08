#ifndef TECNICO_HPP
#define TECNICO_HPP

#include "pessoa.hpp"

using namespace std;
class Tecnico: public Pessoa {
  private:
    int cargaHoraria;
    string setor;
  public:
    void setCargaHoraria(int c){
      this->cargaHoraria = c;
    }
    int getCargaHoraria() {
      return this->cargaHoraria;
    }

    void setSetor(string s){
      this->setor = s;
    }
    string getSetor(){
      return this->setor;
    }
};
#endif
