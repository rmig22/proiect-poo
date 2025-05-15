//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string.h>
#include <utility>
#include <vector>

#ifndef INTREBARE_H
#define INTREBARE_H

class Intrebare{
  private:
    std::string intr;
    char raspuns;
    std::vector <std::string> variante;

  public:
    Intrebare(std::string  intr,
              char raspuns,
              const std::vector<std::string>& variante)
        : intr(std::move(intr)),raspuns (raspuns), variante(variante) {};

  std::string getIntr () const;

  char getRaspuns();
  std::vector <std::string> getRaspunsuri () const;
  void setRaspuns(char *c);

  // Intrebare& operator=(const Intrebare& obj); //overloading =
  std::ostream& operator << (std::ostream&); //overloading <<


};

#endif //INTREBARE_H;