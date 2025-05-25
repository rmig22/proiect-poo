//
// Created by RImoc on 5/19/2025.
//
#pragma once
#include "jucatorNPC.h"
#ifndef JUCATORBOSS_H
#define JUCATORBOSS_H

#endif //JUCATORBOSS_H
class jucatorBoss : public jucatorNPC {
  public:
    jucatorBoss();
    ~jucatorBoss() override = default;
    void player_style(Jucator* jucator, int) override;
};