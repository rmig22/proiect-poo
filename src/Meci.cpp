//
// Created by RImoc on 5/17/2025.
//

#include "Meci.h"
#include <random>


Match::Match(const jucatorNPC &NPC, Jucator *player)  : NPC1 (NPC), player (player) {
  if (NPC1.getElo() >= player->getElo()) {
    int x = rand() % 5;
    if (x>3)
      this->meci_status = "pierdut";
    else
      this->meci_status = "castigat";
  }
  else {
    int x = rand() % 10;
    if (x<10)
      this->meci_status = "castigat";
    else
      this->meci_status = "pierdut";
  }
};

std::string Match::getStatus(){
  return meci_status;
}