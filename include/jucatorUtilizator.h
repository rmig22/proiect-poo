//
// Created by RImoc on 5/13/2025.
//
#pragma once

#include "jucator.h"
#ifndef JUCATORUTILIZATOR_H
#define JUCATORUTILIZATOR_H



class jucatorUtilizator : public Jucator {
private:
    int punctaj=0;
    jucatorUtilizator();
    jucatorUtilizator(const jucatorUtilizator&) = delete;
    jucatorUtilizator& operator=(const jucatorUtilizator&) = delete;
public:
    void actualizare(int p);
    void afisareJucator() override;
    ~jucatorUtilizator() override = default;
    void player_style(Jucator* jucator, int optiune) override;
    int getPunctaj() const;
    void setPunctaj(int punctaj);
    void creare_chestionar();
    static jucatorUtilizator& getInstanta();
};


#endif //JUCATORUTILIZATOR_H
