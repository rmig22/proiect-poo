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
              char  raspuns,
              const std::vector<std::string>& variante)
        : intr(std::move(intr)),raspuns (raspuns), variante(variante) {};

    [[nodiscard]] std::string getIntr () const;
    [[nodiscard]] char getRaspuns () const;
    [[nodiscard]] std::vector <std::string> getRaspunsuri () const;

    std::ostream& operator << (std::ostream&);
};

#endif //INTREBARE_H;