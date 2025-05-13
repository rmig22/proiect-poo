//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string.h>
#include <vector>

#ifndef INTREBARE_H
#define INTREBARE_H

class Intrebare{
  private:
    std::string intr;
    std::string raspuns;
    std::vector <std::string> variante;

  public:
    Intrebare(const std::string& intr,
              const std::string& raspuns,
              const std::vector<std::string>& variante)
        : intr(intr), raspuns(raspuns), variante(variante) {};

    std::string getIntr () const;
    std::string getRaspuns () const;
    std::vector <std::string> getRaspunsuri () const;

};

#endif //INTREBARE_H
