//
// Created by RImoc on 5/13/2025.
//
#pragma once
#include <iostream>
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

    [[nodiscard]] const std::string& getIntr() const;

  [[nodiscard]] char getRaspuns() const;
  [[nodiscard]] const std::vector <std::string>& getRaspunsuri () const;
  void setRaspuns(char *c);

  // Intrebare& operator=(const Intrebare& obj); //overloading =
  friend std::ostream& operator << (std::ostream& os, const Intrebare& i); //


};

#endif //INTREBARE_H;