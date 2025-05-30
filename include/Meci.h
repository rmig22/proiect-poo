//
// Created by RImoc on 5/16/2025.
//
#pragma once
#include "jucatorBoss.h"
#include "jucatorUtilizator.h"
#ifndef MATCH_H
#define MATCH_H


class Match{
  friend class Turnament;
  protected:
    jucatorNPC NPC1;
    Jucator *player;
    std::string meci_status;
    std::string tip_jucator;
    int p=1;
  public:
    Match() : player(nullptr) {}
    Match(jucatorNPC& NPC, Jucator *jucator, const std::string &tip_jucator);
    ~Match() = default;
    const std::string& getStatus() const;
};

#endif //MATCH_H