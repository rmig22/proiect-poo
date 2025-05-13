//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <intrebare.h>
using namespace std;

std::string Intrebare:: getIntr () const {
  return (intr);
}

std::string Intrebare::getRaspuns () const {
  return (raspuns);
}

std::vector<std::string> Intrebare::getRaspunsuri() const {
  return (variante);
}