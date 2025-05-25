//
// Created by RImoc on 5/13/2025.
//
#pragma once

#include <vector>
#include <deque>
#include "intrebare.h"
#ifndef CHESTIONAR_H
#define CHESTIONAR_H


class Chestionar {

 protected:
   int punctaj = 0;
    std::vector <Intrebare> intrebarile_totale = {};
    std::deque <Intrebare> set_intrebari = {};

 public:
    Chestionar();
    int getPunctaj() const;
    // cppcheck-suppress unusedFunction
    // void afiseazaIntrebari() const;
    ~Chestionar() = default;
};


#endif //CHESTIONAR_H
