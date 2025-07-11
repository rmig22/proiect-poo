//
// Created by RImoc on 5/16/2025.
//
#pragma once
#include "MeciFinal.h"
#ifndef TURNAMENT_H
#define TURNAMENT_H
#include <vector>
#endif //TURNAMENT_H

class Turnament{
  friend class Match;
  protected:
    std::vector<jucatorNPC> multime_jucatori= {};
    std::vector<jucatorNPC> jucatori_participanti = {};
    std::vector<jucatorNPC> sferturi = {};
    std::vector<jucatorNPC> semi_finale = {};
    static std::string nume;
    jucatorNPC finala;
  public:
    Turnament();
    ~Turnament() = default;
    void simulate();
    void continuare_sferturi(std::vector<jucatorNPC> &sferturi, jucatorUtilizator &X);
    void continuare_semi_finale(std::vector<jucatorNPC> &semi_finale, jucatorUtilizator &X);
    void continuare_finala(jucatorNPC &finala, jucatorUtilizator &X);
    void start_turnament(jucatorUtilizator &X);
    static void tip_turneu();
};


