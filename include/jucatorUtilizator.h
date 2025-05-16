//
// Created by RImoc on 5/13/2025.
//
#include <string>
#include "../src/jucator.cpp"
#include <iostream>
#include <math.h>
#ifndef JUCATORUTILIZATOR_H
#define JUCATORUTILIZATOR_H



class jucatorUtilizator : public Jucator {

  public:
    jucatorUtilizator();
    void actualizare(int p);
    void afisareJucator() override;
    ~jucatorUtilizator() override = default;
};


#endif //JUCATORUTILIZATOR_H
