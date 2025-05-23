//
// Created by RImoc on 5/19/2025.
//
#pragma once
#include "Meci.h"
#ifndef MECIFINAL_H
#define MECIFINAL_H

#endif //MECIFINAL_H

class MeciFinal : public Match{
  protected:
    //int p=1;
    //std::string stil_joc;
    jucatorUtilizator& user;
    jucatorBoss& veteran;
  public:
    MeciFinal(jucatorUtilizator& user, jucatorBoss& veteran);
    ~MeciFinal() = default;
    void meci_style() const;

    int choose_style(const std::string& prompt) const;
};