#include <iostream>
#include <algorithm>
#define MAX 60

using namespace std;

class Lista {
protected:
    int dados[MAX];
    int n;
public:
    Lista() {
        n=0;
    }
    void inserir (int elemento) {
        dados[n] = elemento;
        n++;
    }
    bool buscar (int elemento) {
        for(int i =0; i<n; i++)
            if(dados[i]==elemento)
                return true;
        return false;
    }
    bool remover (int elemento) {
        int pos;
        for (pos=0; pos<n; pos++) {
            if (dados[pos] == elemento)
                break;
        }
        // percorreu todo o vetor e n�o encontrou
        // retorna false, indicando que n�o apagou
        if (pos == n) {
            return false;
        }
        else {
            for(; pos < n-1; pos++) {
                dados[pos] = dados[pos+1];
            }
            // "apaga" o �ltimo elemento, que
            // estaria duplicado, e decrementa n
            dados[n-1] = 0;
            n--;
            return true;
        }
    }
    void imprimir() {
        for(int i =0; i<n; i++)
            cout << dados[i] << " ";
        cout << endl;
    }
};

class ListaOrdenada : public Lista {
public:
    void inserir(int elemento) {
        Lista::inserir(elemento);
        for (int i=n-1; i>0;i--) {
            if(dados[i] < dados[i-1])
                swap(dados[i], dados[i-1]);
            else
                return;
        }
    }
};

class Pilha : public Lista {
  public:
    bool remover (int elemento){
      if(this->n-- >= 0)
        return true;
      else return false;
    }

};

class Fila : public Lista {
  public:
    bool remover (int elemento){
      if(n > 0){
        int r = this->dados[0];
        for(int i=0; i < n; i++){
          swap(this->dados[i], this->dados[i+1]);
        }
        this->n--;
        return true;
      } else return false;
    }
};
int main()
{
  Fila l;
  l.inserir(21);
  l.inserir(27);
  l.remover(33);
  l.imprimir();
  l.inserir(24);
  l.inserir(3);

  l.imprimir();

  Pilha p;
  p.inserir(10);
  p.inserir(3);
  p.imprimir();

  p.inserir(4);
  p.imprimir();
  p.remover(5);
  p.imprimir();
  if (l.buscar(27))
    cout << "27 foi encontrado" << endl;
  else
    cout << "27 n�o foi encontrado" << endl;

  return 0;
}
