//
// Created by RImoc on 5/16/2025.
//
#pragma once
#include "../src/jucatorBoss.cpp"
#include "../src/jucatorUtilizator.cpp"
#ifndef MATCH_H
#define MATCH_H

#endif //MATCH_H

class Match{
  friend class Turnament;
  protected:
    jucatorNPC NPC1;
    Jucator *player;
    std::string meci_status;
    std::string tip_jucator;
    int p=1;
  public:
    Match() = default;
    Match(const jucatorNPC& NPC, Jucator *jucator, const std::string &tip_jucator);
    ~Match() = default;
    std::string getStatus();
};
