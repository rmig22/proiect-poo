//
// Created by RImoc on 5/13/2025.
//
#pragma once

#include "jucator.h"
#ifndef JUCATORUTILIZATOR_H
#define JUCATORUTILIZATOR_H



class jucatorUtilizator : public Jucator {
    protected:
    int punctaj=0;

  public:
    jucatorUtilizator();
    void actualizare(int p);
    void afisareJucator() override;
    ~jucatorUtilizator() override = default;
    void player_style(Jucator* jucator, int optiune) override;
    int getPunctaj() const;
    void setPunctaj(int punctaj);
    void creare_chestionar();
};


#endif //JUCATORUTILIZATOR_H
