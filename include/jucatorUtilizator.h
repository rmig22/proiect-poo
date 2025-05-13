//
// Created by RImoc on 5/13/2025.
//
#include <string>
#include <jucator.h>
#include <iostream>
#include <math.h>
#ifndef JUCATORUTILIZATOR_H
#define JUCATORUTILIZATOR_H



class jucatorUtilizator : public Jucator {
  protected:
    std::string categorie = "maestru";

  public:
    jucatorUtilizator(const std::string& nume, int elo);
    void actualizare();
    void afisareJucator() override;
};


#endif //JUCATORUTILIZATOR_H
