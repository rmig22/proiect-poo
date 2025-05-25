//
// Created by RImoc on 5/25/2025.
//

#ifndef UPDATEELO_H
#define UPDATEELO_H


template <typename jucator>
void updateElo (jucator* player, const int elo_castigat){
    int currentElo = player->getElo();
    player->setElo(currentElo + elo_castigat);
}

template <typename jucator>
void updateElo (jucator& player, const int elo_castigat){
    int currentElo = player.getElo();
    player.setElo(currentElo + elo_castigat);
}

#endif //UPDATEELO_H
