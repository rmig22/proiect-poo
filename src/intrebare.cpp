//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include "../include/intrebare.h"

std::string Intrebare:: getIntr () const {
  return intr;
}

char Intrebare::getRaspuns () const {
  return raspuns;
}

std::vector<std::string> Intrebare::getRaspunsuri() const {
  return variante;
}

std::ostream& operator << (std::ostream& c, const Intrebare &i) {
  c<<i.getIntr()<< std::endl;//<< i.getRaspunsuri() << std::endl << "Raspuns: ";
  for (const auto& x : i.getRaspunsuri()) {
    c<<x<<std::endl;
  }
  c << "Raspuns: ";
  return c;
}