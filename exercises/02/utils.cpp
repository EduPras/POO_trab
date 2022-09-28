#include "utils.hpp"

// Gerador de id com base no endereço do
// ponteiro da classe conta
size_t string_hash(Conta* c){
    hash<string> h;
    stringstream ss;
    ss << c;
    return h(ss.str());
}
