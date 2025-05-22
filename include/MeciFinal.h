//
// Created by RImoc on 5/19/2025.
//
#include "Meci.cpp"
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
    void meci_style();
};