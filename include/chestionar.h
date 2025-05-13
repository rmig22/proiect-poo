//
// Created by RImoc on 5/13/2025.
//
#include <vector>
#include <Intrebare.h>
#ifndef CHESTIONAR_H
#define CHESTIONAR_H


class Chestionar {

 private:
   int punctaj = 0;
   std::vector <Intrebare> intrebarile_totale;

 public:
   Chestionar();
   void afiseazaIntrebari();
};


#endif //CHESTIONAR_H
