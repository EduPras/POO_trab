#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>

using namespace std;


class Date {
  private:
    int day_, month_, year_;
    vector<string> MONTHS = {
      "Janeiro", "Fevereiro", "Março", "Abril", "Maio",
      "Junho", "Julho", "Agosto", "Setembro", "Outubro",
      "Novembro", "Dezembro"
    };
  public:
    Date() {
      std::time_t t = std::time(nullptr);
      std::tm* now = std::localtime(&t);
      this->day_ = now->tm_mday;
      this->month_ = now->tm_mon+1;
      this->year_ = now->tm_year + 1900;
    }
    Date(int d, int m, int y):
      day_{d}, month_{m}, year_{y} {};

    int getDay(){ return this->day_; };
    void setDay(int d){ this->day_ = d; };

    int getMonth(){ return this->month_; };
    void setMonth(int m){ this->month_ = m; };
    
    int getYear(){ return this->year_; };
    void setYear(int y){ this->year_ = y; };
    
    string compactFormat() {
      stringstream ss;
      ss << this->day_ << "/" <<this->month_ << "/" << this->year_ << endl;
      return ss.str();
    }

    string extenseFormat(){
      stringstream ss;
      ss << "Dia " << this->day_ << " de"
        << MONTHS[this->month_-1] << " de " << this->year_ << endl;
      return ss.str();
    }
};


class Pessoa {
  private:
    string name_;
    Date *birthDate_;
    int const cpf_ ;
    static vector<Pessoa*> people;
  public:
    Pessoa(int const cpf ): cpf_{cpf} {
      people.push_back(this);
    };

    string getName() { return this->name_; };
    void setName(string n) { this->name_ = n; };

    Date* getDate() { return this->birthDate_; }
    void setDate(Date *d) {this->birthDate_ = d;};

    int getCpf(){ return this->cpf_; };

    void static list(){
      int i;
      vector<Pessoa*>::iterator it;
      for(it = people.begin(),  i = 0; it != people.end(); it++, i++)
        cout << i << ": " << (*it)->name_ << endl;
    }
};

void insertPerson(){
  cout << "Name: ";
  string aux;
  cin >> aux;

}
int main(){
  vector<Pessoa*> people = {}
  while(true){
    int aux;
    cout << "CADASTRO: \n"
      << "1 - Incluir pessoa\n"
      << "2 - Visualizar pessoas\n"
      << "3 - Remover pessoas\n"
      << "4 - sair" << endl;
    cin << aux;
    if(aux == 4) break;

  }
  return 0;
}
