//
// Created by RImoc on 5/17/2025.
//

#include "Turnament.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

Turnament::Turnament() {
     ifstream fin ("../participanti.txt");
     jucatorNPC x;
     while (fin>>x) {
         multime_jucatori.push_back(x);
     }
    fin.close();
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(multime_jucatori.begin(), multime_jucatori.end(), rng);
    for (int i=0; i<=14; i++) {
        jucatori_participanti.push_back(multime_jucatori[i]);
    }
    jucatorUtilizator X;
    system("cls");
    std::cout<<"Incepe turneul!"<<std::endl<<"------------------------------------------------------"<<std::endl<<std::endl;
    std::cin.ignore();
    // Match Meci(jucatori_participanti[2], &X);
    for (int i=0; i<14; i+=2) {
        Match meci(jucatori_participanti[i], &jucatori_participanti[i+1], "npc");
        //std::cout<< i<<" "<<meci.getStatus()<<" "<<jucatori_participanti[i].getNume()<<" "<<jucatori_participanti[i+1].getNume()<<std::endl;
        if (meci.getStatus() == "castigator jucator 1"){
            sferturi.push_back(jucatori_participanti[i]);
        }
        else
            sferturi.push_back(jucatori_participanti[i+1]);
    }
    Match meci1(jucatori_participanti[14], &X, "user");
    meci1.tip_jucator = "user";
    // std::cout<< "14 "<< meci1.getStatus()<<" "<< jucatori_participanti[14].getNume()<<" "<<X.getNume()<<std::endl;
    if (meci1.getStatus() == "castigator jucator 1") {
        simulate();
    }
    else {
        std::cout<<"Apasati Enter ca sa continuati!";
        std::cin.ignore();
        std::cout<<std::endl;
        std::cout<<"Felicitari! Ati ajuns in sferturi!"<<std::endl;
        std::cout<<"Apasati Enter ca sa continuati!";
        std::cin.ignore();
        continuare_sferturi(sferturi, X );
    }
}

void Turnament::simulate() {

}

void Turnament::continuare_sferturi(std::vector<jucatorNPC> &sferturi, jucatorUtilizator &X) {
    for (int i = 0; i<5; i+=2) {
        Match sferturi1 (sferturi[i], &sferturi[i+1], "npc");
        //cout<<sferturi[i].getNume()<< " "<< sferturi[i].getCategorie()<< " "<< sferturi[i+1].getNume()<<" "<< sferturi[i+1].getCategorie()<< " "<< sferturi1.getStatus()<<std::endl;
        if (sferturi1.getStatus() == "castigator jucator 1") {
            semi_finale.push_back(sferturi[i]);
        }
        else {
            semi_finale.push_back(sferturi[i+1]);
        }
    }
    Match sferturiUser(sferturi[6], &X, "user");
    if (sferturiUser.getStatus() == "castigator jucator 2") {
        continuare_semi_finale(semi_finale, X);
    }
    

    //cout<<sferturi[6].getNume()<<" "<< X.getNume()<<" "<<sferturiUser.meci_status<<std::endl;
}
void Turnament::continuare_semi_finale(std::vector<jucatorNPC> &semi_finale, jucatorUtilizator &X) {
    std::cout<<std::endl<<"------------------------------------------------------\nFelicitari! Ati ajuns in semi-finala!"<<std::endl;
    std::cout<<"Apasati Enter ca sa continuati!";
    std::cin.ignore();
    Match semi_finale1(semi_finale[0], &semi_finale[1], "npc");
    if (semi_finale1.getStatus() == "castigator jucator 1") {
        this->finala =semi_finale[0];
    }
    else {
        this->finala = semi_finale[1];
    }
    Match semi_finale2(semi_finale[2], &X, "user");
    if (semi_finale2.getStatus() == "castigator jucator 2") {
        std::cout<<std::endl;
        std::cout<<"------------------------------------------------------\nFelicitari! Ati ajuns in finala!"<<std::endl;
        std::cout<<"Apasati Enter pentru a continua!";
        std::cin.ignore();
        continuare_finala(finala, X);
    }
}
void Turnament::continuare_finala(jucatorNPC& finala,jucatorUtilizator& X) {
    std::cout<<finala.getCategorie()<<std::endl;
    Match finala_ (finala, &X, "user");
    if (finala_.getStatus() == "castigator jucator 2") {
        system("cls");
        std::cout<<"------------------------------------------------------\nFelicitari! Ati castigat turneul!"<<std::endl;
        jucatorBoss Veteranul;
        Veteranul.setStyle("agresiv"); //fac asta in meci final
        //MeciFinal meci_final(X, Veteranul);
    }
}
