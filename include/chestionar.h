//
// Created by RImoc on 5/13/2025.
//
#pragma once

#include <vector>
#include "intrebare.h"//
#include "exceptie.h"
#ifndef CHESTIONAR_H
#define CHESTIONAR_H


class Chestionar {

    // friend class jucator;
 protected:
   int punctaj = 0;
    std::vector <Intrebare> intrebarile_totale = {};
    std::vector <Intrebare> set_intrebari = {};

 public:
    Chestionar();
    int getPunctaj() const;
   void afiseazaIntrebari() const;
    ~Chestionar() = default;
};


#endif //CHESTIONAR_H
