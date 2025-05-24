//
// Created by RImoc on 5/13/2025.
//
#include "../include/jucator.h"
#include <iostream>
#include <utility>

void Jucator::afisareJucator() {
  std::cout<< "jucator: "<< nume<<std::endl<< "elo: "<< elo<<std::endl;
};

// std::string Jucator::getNume() const {
//   return nume;
// }
int Jucator::getElo() const {
  return elo;
}
void Jucator::setNume(std::string nume1) {
  this->nume = std::move(nume1);
}
void Jucator::setElo(int elo1) {
  this->elo = elo1;
}
void Jucator :: setCategorie(const std::string& cat) {
  this->categorie = cat;
}
std::string Jucator :: getCategorie() {
  return categorie;
}
std::string Jucator :: getStyle() {
  return style;
}
void Jucator::setStyle(const std::string &Style) {
  this->style = Style;
}
Jucator::Jucator() = default;

Jucator::Jucator(const Jucator& other) : nume(other.nume), elo(other.elo), categorie(other.categorie), style(other.style) {}

Jucator& Jucator::operator=(const Jucator& other) {
  if (this != &other) {
    nume = other.nume;
    elo = other.elo;
    categorie = other.categorie;
    style = other.style;
  }
  return *this;
}



