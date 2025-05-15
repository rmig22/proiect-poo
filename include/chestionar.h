//
// Created by RImoc on 5/13/2025.
//
#pragma once

#include <vector>
#include "../src/intrebare.cpp"//
#ifndef CHESTIONAR_H
#define CHESTIONAR_H


class Chestionar {

    friend class jucatorUtilizator;
 protected:
   int punctaj = 0;
    std::vector <Intrebare> intrebarile_totale = {};
    std::vector <Intrebare> set_intrebari = {};

 public:
    Chestionar();
    ~Chestionar() = default;
    int getPunctaj() const;
   void afiseazaIntrebari();
};


#endif //CHESTIONAR_H
