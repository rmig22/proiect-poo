//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
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
        : intr(std::string (intr)),raspuns (raspuns), variante(variante) {};

    [[nodiscard]] std::string getIntr() const;

  [[nodiscard]] char getRaspuns() const;
  [[nodiscard]] std::vector <std::string> getRaspunsuri () const;
  void setRaspuns(char *c);

  // Intrebare& operator=(const Intrebare& obj); //overloading =
  std::ostream& operator << (std::ostream&); //overloading <<


};

#endif //INTREBARE_H;