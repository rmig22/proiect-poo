//
// Created by RImoc on 5/13/2025.
//

#include "../src/jucator.cpp"
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
};


#endif //JUCATORUTILIZATOR_H
