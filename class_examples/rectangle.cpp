
#include <iostream>

using namespace std;

class Retangulo {
  private:
    int base_, altura_;
  public:
    Retangulo(int a, int b): base_(b), altura_(a) {};
    float area(){
      return base_*altura_;
    };
    void setAltura(int a){ this->altura_ = a; }
    void setBase(int b){ this->base_  = b;}
    int getBase() { return this->base_; }
    int getAltura() { return this->altura_; }
};

int main(){
  Retangulo r(10, 20);
  cout <<  r.area() << endl;
}
