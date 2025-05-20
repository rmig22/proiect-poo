//
// Created by RImoc on 5/19/2025.
//
#include "Jucator.h"
#ifndef JUCATORBOSS_H
#define JUCATORBOSS_H

#endif //JUCATORBOSS_H
class jucatorBoss : public jucatorNPC {
  public:
    jucatorBoss();
    ~jucatorBoss() = default;
    void player_style(Jucator* jucator) override;
};