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
std::ostream& operator<<(std::ostream& fout, jucatorNPC& juc){
    fout<<"Nume: "<<juc.getNume()<<" "<<"Elo:  "<< juc.getElo();
    return fout;
}

void jucatorNPC::player_style(Jucator*, int) {};
jucatorNPC::jucatorNPC(const  jucatorNPC& juc):Jucator(juc) {
}

jucatorNPC& jucatorNPC::operator=(const jucatorNPC& other) {
    if (this != &other) {
        Jucator::operator=(other);
        // Copy members of jucatorNPC if any
    }
    return *this;
}