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
    std::string text;
    std::string raspuns;
    std::vector <std::string> raspunsuri;

  public:
    Intrebare (const std::string& text, const std::string& raspuns, const:: std::string& raspunsuri);


};

#endif //INTREBARE_H
