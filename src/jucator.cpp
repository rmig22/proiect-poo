//
// Created by RImoc on 5/13/2025.
//
#include "jucator.h"
#include <iostream>
#include <string.h>
#include<fstream>

using namespace std;

Jucator::Jucator(const std::string& nume, int elo) : nume(nume), elo(elo){};

void Jucator::afisareJucator() {
  std::cout<< "jucator: "<< nume<<std::endl<< "elo: "<< elo<<std::endl;
};

std::string Jucator::getNume() {
  return nume;
}
int Jucator::getElo() {
  return elo;
}
void Jucator::setNume(std::string &nume) {
  this->nume = nume;
}
void Jucator::setElo(int elo) {
  this->elo = elo;
}





