//
// Created by RImoc on 5/13/2025.
//
#include "../include/jucator.h"
#include <iostream>
#include <string.h>
#include<fstream>
#include <utility>

void Jucator::afisareJucator() {
  std::cout<< "jucator: "<< nume<<std::endl<< "elo: "<< elo<<std::endl;
};

std::string Jucator::getNume() const {
  return nume;
}
int Jucator::getElo() const {
  return elo;
}
void Jucator::setNume(std::string nume) {
  this->nume = std::move(nume);
}
void Jucator::setElo(int elo) {
  this->elo = elo;
}
void Jucator :: setCategorie(std::string cat) {
  this->categorie = cat;
}
std::string Jucator :: getCategorie() {
  return categorie;
}




