//
// Created by RImoc on 5/17/2025.
//

#include "Meci.h"
#include "updateElo.h"
#include <random>


Match::Match(jucatorNPC &NPC, Jucator *player,const std::string& tip_jucator)  : NPC1 (NPC), player (player), tip_jucator(tip_jucator)  {
  int x;
  if (this->tip_jucator == "user") {
    x = rand() % 40;
    if (player->getElo()>NPC.getElo()) {
      if (x<=38) {
        meci_status = "castigator jucator 2";
      }
      else {
        meci_status = "castigator jucator 1";
      }
    }
    else {
        if (player->getElo() - NPC1.getElo()<=200) {
        x = rand() % 18;
        if (x<2) {
          meci_status = "castigator jucator 1";
        }
        else {
          meci_status = "castigator jucator 2";
        }
      }
      else if (player->getElo() - NPC1.getElo() < 800){
        x = rand() % 26;
        if (x<2) {
          meci_status = "castigator jucator 1";
        }
        else {
          meci_status = "castigator jucator 2";
        }
      }
      else {
        meci_status = "castigator jucator 2";
      }
    }
  }
  else if (abs(NPC1.getElo() -  player->getElo()) <=200) {
    x = rand() % 4;
    if (x<2) {
      meci_status = "castigator jucator 1";
    }
    else {
      meci_status = "castigator jucator 2";
    }
  }
  else if (abs(NPC1.getElo() -  player->getElo()) < 800){
    if (NPC1.getElo() > player->getElo()) {
      x = rand() % 10;
      if (x <=8) {
        meci_status = "castigator jucator 1";
      }
      else {
        meci_status = "castigator jucator 2";
      }
    }
    if (NPC1.getElo() < player->getElo()) {
      x = rand() % 10;
      if (x <=8) {
        meci_status = "castigator jucator 2";
      }
      else {
        meci_status = "castigator jucator 1";
      }
    }
  }
  else {
    if (NPC1.getElo() > player->getElo()) {
      x = rand() % 20;
      if (x <=18) {
        meci_status = "castigator jucator 1";
      }
      else {
        meci_status = "castigator jucator 2";
      }
    }
    else {
      if (NPC1.getElo() < player->getElo()) {
        x = rand() % 20;
        if (x <=18) {
          meci_status = "castigator jucator 1";
        }
        else {
          meci_status = "castigator jucator 2";
        }
      }
    }
  }
}

const std::string &Match::getStatus() const {
  return meci_status;
}
