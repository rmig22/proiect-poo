//
// Created by RImoc on 5/17/2025.
//

#include "Turnament.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <random>
#include <updateElo.h>
using namespace std;

Turnament::Turnament() {
    std::istringstream fin("Mihai 1500 II\nAlex 1700 I\nTudor 1345 III\nMaria 1567 II\nIon 2041 maestru\nElena 1455 II\nCristian 1902 candidat_de_maestru\nAna 1320 III\nMihai 1789 I\nIoana 1543 II\nVlad 2120 maestru\nAlexandra 1651 I\nRadu 1473 II\nAlina 1930 candidat_de_maestru\nSorin 1822 candidat_de_maestru\nIrina 1699 I\nFlorin 1157 IV\nDiana 1625 I\nGeorge 1984 candidat_de_maestru\nOana 1234 III\nCiprian 1750 I\nGabriela 1518 II\nPaul 1103 IV\nLavinia 1356 III\nLucian 1855 cabdidat_maestru\nTeodora 1701 I\nDan 2077 maestru\nRaluca 1402 II\nCosmin 1596 I\nBianca 1388 III\nSebastian 1999 candidat_de_maestru\nNatalia 1220 III\n");

    jucatorNPC x;
    while (fin>>x) {
        multime_jucatori.push_back(x);
    }
    std::random_device rd;
    std::mt19937 rng(rd());
    ranges::shuffle(multime_jucatori, rng);
    for (int i=0; i<=14; i++) {
        jucatori_participanti.push_back(multime_jucatori[i]);
    }
}
void Turnament::start_turnament(jucatorUtilizator &X) {
    std::cout<<"Incepe turneul!"<<std::endl<<"------------------------------------------------------"<<std::endl<<std::endl;
    std::cin.ignore();
    for (int i=0; i<14; i+=2) {
        Match meci(jucatori_participanti[i], &jucatori_participanti[i+1], "npc");
        if (meci.getStatus() == "castigator jucator 1"){
            sferturi.push_back(jucatori_participanti[i]);
            updateElo(jucatori_participanti[i+1], 200);
        }
        else {
            sferturi.push_back(jucatori_participanti[i+1]);
            updateElo(jucatori_participanti[i], 200);
        }
    }
    std::cout<<std::endl<<"Urmatorul meci il aveti cu: "<<jucatori_participanti[14].getNume()<<std::endl<<"Elo: "<<jucatori_participanti[14].getElo()<<std::endl<<"Categorie: "<<jucatori_participanti[14].getCategorie()<<std::endl;;
    Match meci1(jucatori_participanti[14], &X, "user");
    meci1.tip_jucator = "user";
    // std::cout<< "14 "<< meci1.getStatus()<<" "<< jucatori_participanti[14].getNume()<<" "<<X.getNume()<<std::endl;
    if (meci1.getStatus() == "castigator jucator 1") {
        updateElo(&X, 200);
        simulate();
    }
    else {
        std::cout<<"Apasati Enter ca sa continuati!";
        std::cin.ignore();
        std::cout<<std::endl;
        std::cout<<"Felicitari! Ati ajuns in sferturi!"<<std::endl;
        std::cout<<"Apasati Enter ca sa continuati!";
        std::cin.ignore();
        updateElo(jucatori_participanti[14], 200);
        continuare_sferturi(sferturi, X );
    }
}

void Turnament::simulate() {
    system("cls");
    std::cout<<"Ne pare rau! Ati pierdut meciul";
    std::cin.ignore();
}

void Turnament::continuare_sferturi(std::vector<jucatorNPC> &sferturi_local, jucatorUtilizator &X) {
    for (int i = 0; i<5; i+=2) {
        Match sferturi1 (sferturi_local[i], &sferturi_local[i+1], "npc");
        //cout<<sferturi[i].getNume()<< " "<< sferturi[i].getCategorie()<< " "<< sferturi[i+1].getNume()<<" "<< sferturi[i+1].getCategorie()<< " "<< sferturi1.getStatus()<<std::endl;
        if (sferturi1.getStatus() == "castigator jucator 1") {
            semi_finale.push_back(sferturi_local[i]);
            updateElo(jucatori_participanti[i+1], 400);
        }
        else {
            semi_finale.push_back(sferturi_local[i+1]);
            updateElo(jucatori_participanti[i], 400);
        }
    }
    std::cout<<std::endl<<"Urmatorul meci il aveti cu: "<<std::endl<<sferturi_local[6].getNume()<<std::endl<<"Elo: "<<sferturi_local[6].getElo()<<std::endl<<"Categorie: "<<sferturi_local[6].getCategorie()<<std::endl;
    Match sferturiUser(sferturi_local[6], &X, "user");
    if (sferturiUser.getStatus() == "castigator jucator 2") {
        continuare_semi_finale(semi_finale, X);
    }
    else {
        simulate();
    }
    

    //cout<<sferturi[6].getNume()<<" "<< X.getNume()<<" "<<sferturiUser.meci_status<<std::endl;
}
void Turnament::continuare_semi_finale(std::vector<jucatorNPC> &semi_finale_local, jucatorUtilizator &X) {
    std::cout<<std::endl<<"------------------------------------------------------\nFelicitari! Ati ajuns in semi-finala!"<<std::endl;
    std::cout<<"Apasati Enter ca sa continuati!";
    std::cin.ignore();
    Match semi_finale1(semi_finale_local[0], &semi_finale_local[1], "npc");
    if (semi_finale1.getStatus() == "castigator jucator 1") {
        this->finala =semi_finale_local[0];
        updateElo(semi_finale_local[1], 600);
    }
    else {
        this->finala = semi_finale_local[1];
        updateElo(semi_finale_local[0], 600);
    }
    std::cout<<std::endl<<"Urmatorul meci il aveti cu: "<<semi_finale_local[2].getNume()<<std::endl<<"Elo: "<<semi_finale_local[2].getElo()<<std::endl<<"Categorie: "<<semi_finale_local[2].getCategorie()<<std::endl;
    Match semi_finale2(semi_finale_local[2], &X, "user");
    if (semi_finale2.getStatus() == "castigator jucator 2") {
        updateElo(semi_finale_local[2], 800);
        std::cout<<std::endl;
        std::cout<<"------------------------------------------------------\nFelicitari! Ati ajuns in finala!"<<std::endl;
        std::cout<<"Apasati Enter pentru a continua!";
        std::cin.ignore();
        continuare_finala(finala, X);
    }
    else {
        simulate();
    }
}
void Turnament::continuare_finala(jucatorNPC &finala_jucator, jucatorUtilizator &X) {
    // std::cout<<finala.getCategorie()<<std::endl;
    std::cout<<std::endl<<"Urmatorul meci il aveti cu: "<<finala_jucator.getNume()<<std::endl<<"Elo: "<<finala_jucator.getElo()<<std::endl<<"Categorie: "<<finala_jucator.getCategorie()<<std::endl;;
    Match finala_1 (finala_jucator, &X, "user");
    if (finala_1.getStatus() == "castigator jucator 2") {
        system("cls");
        std::cout<<"------------------------------------------------------\nFelicitari! Ati castigat turneul!"<<std::endl;
        jucatorBoss Veteranul;
        //Veteranul.setStyle("agresiv"); //fac asta in meci final
        MeciFinal meci_final(X, Veteranul);
        //X.player_style(&Veteranul, int optiune);
    }
    else {
        simulate();
    }
}
