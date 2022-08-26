#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getStringLower(string str){
  for (int i = 0; i < str.size(); i++){
    if(str.at(i) < 97) 
      str[i] = str[i] + (char)32;
  }
  return str;
}

void sortString(vector<string> *vec){
  vector<string>::iterator it, it1;
  string aux;
  for(it = vec->begin(); it != vec->end()-1; it++){
    for(it1 = it+1; it1 != vec->end(); it1++){
      if(it->compare(*it1) < 0){
        aux = *it;
        *it = *it1;
        *it1 = aux;
      }
    }
  }
}

int main(){
  vector<string> vec;
  vector<string>::iterator it;
  int N;
  string aux;
  cin >> N;
  while(N--){
    cin >> aux;
    aux = getStringLower(aux);
    vec.push_back(aux);
  }

  sortString(&vec);
}
