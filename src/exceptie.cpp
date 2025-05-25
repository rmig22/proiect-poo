//
// Created by RImoc on 5/22/2025.
//

#include "exceptie.h"

#include <jucatorNPC.h>
Exceptie::Exceptie(const std::string& mesaj) : mesaj(mesaj){}

const char* Exceptie::what() const noexcept{
  return mesaj.c_str();
}
void Exceptie::verifica(const std::string &rasp) {
  if (rasp != "a" && rasp != "b" && rasp != "c" && rasp != "d" && rasp != "A" && rasp != "B" && rasp != "C" && rasp != "D") {
    throw Exceptie("Va rugam sa introduceti una dintre optiunile: a, b, c sau d.");
  }
}
void Exceptie::verifica_inp(const int optiune) {
  if (std::cin.fail()) {
    throw std::invalid_argument("Introdu un numar");
  }

  if (optiune < 1 || optiune>3) {
    throw std::out_of_range("Introdu un numar intr 1, 2 si 3");
  }
}