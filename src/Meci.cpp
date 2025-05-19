//
// Created by RImoc on 5/17/2025.
//

#include "Meci.h"
#include <random>


Match::Match(const jucatorNPC &NPC, Jucator *player,const std::string& tip_jucator)  : NPC1 (NPC), player (player), tip_jucator(tip_jucator)  {
  int x;
  if (this->tip_jucator == "user") {
    x = rand() % 40;
    if (x<=39) {
      meci_status = "castigator jucator 2";
    }
    else {
      meci_status = "castigator jucator 1";
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
  else if (abs(NPC1.getElo() -  player->getElo()) >200 && abs(NPC1.getElo() -  player->getElo() < 800)){
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
      if (x <=19) {
        meci_status = "castigator jucator 1";
      }
      else {
        meci_status = "castigator jucator 2";
      }
    }
    else {
      if (NPC1.getElo() < player->getElo()) {
        x = rand() % 20;
        if (x <=19) {
          meci_status = "castigator jucator 1";
        }
        else {
          meci_status = "castigator jucator 2";
        }
      }
    }
  }
}

std::string Match::getStatus(){
  return meci_status;
}