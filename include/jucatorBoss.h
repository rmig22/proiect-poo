//
// Created by RImoc on 5/19/2025.
//
#include "../src/jucatorNPC.cpp"
#ifndef JUCATORBOSS_H
#define JUCATORBOSS_H

#endif //JUCATORBOSS_H
class jucatorBoss : public jucatorNPC {
    protected:
    int p=0;
  public:
    jucatorBoss();
    ~jucatorBoss() override = default;
    void player_style(Jucator* jucator, int optiune) override;
};