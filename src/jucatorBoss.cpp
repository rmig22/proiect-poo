//
// Created by RImoc on 5/19/2025.
//
#include "jucatorBoss.h"

void jucatorBoss::player_style(Jucator* jucator) {
    if (jucator->getStyle() == "aggresiv"){
      std::cout<<"Joci agresiv! Daca nu esti calm, faci greseli..."<<std::endl;
      this->setStyle("chill");
    }
    else if (jucator->getStyle() == "chill"){
      std::cout<<"Joci cam prea nepasator, o sa analizez jocul..."<<std::endl;
      this->setStyle("calculating");
    }
    else if (jucator->getStyle() == "calculat"){
      std::cout<<"Te gandesti cam mult, o sa fac ritmul mai rapid..."<<std::endl;
      this->setStyle("aggresive");
    }
    //p++;
}