//
// Created by RImoc on 5/22/2025.
//

#include "exceptie.h"
Exceptie::Exceptie(const std::string& mesaj) : mesaj(mesaj){}

const char* Exceptie::what() const noexcept{
  return mesaj.c_str();
}

//#include "Exceptie.h"
//
//Exceptie::Exceptie(const std::string& mesaj) : mesaj(mesaj) {}
//
//const char* Exceptie::what() const noexcept {
//  return mesaj.c_str();
//}
