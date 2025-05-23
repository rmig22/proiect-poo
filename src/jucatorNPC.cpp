//
// Created by RImoc on 5/15/2025.
//
#include "../include/jucatorNPC.h"
#include <fstream>
using namespace std;

jucatorNPC::jucatorNPC() = default;

std::istream& operator>>(std::istream& fin, jucatorNPC& jucator_ov) {
    if (fin>>jucator_ov.nume >>jucator_ov.elo>>jucator_ov.categorie) {
        jucator_ov.setNume(jucator_ov.nume);
        jucator_ov.setElo(jucator_ov.elo);
        jucator_ov.setCategorie(jucator_ov.categorie);
    }
    return fin;
}

void jucatorNPC::player_style(Jucator*, int) {};
jucatorNPC::jucatorNPC(const jucatorNPC& other):Jucator(other) {
}

jucatorNPC& jucatorNPC::operator=(const jucatorNPC& other) {
    if (this != &other) {
        Jucator::operator=(other);  // Assign base part
        // Copy members of jucatorNPC if any
    }
    return *this;
}