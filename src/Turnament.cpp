//
// Created by RImoc on 5/17/2025.
//

#include "Turnament.h"
#include <fstream>
#include <vector>

using namespace std;

Turnament::Turnament() {
    //jucatorUtilizator Jucatorul;
    //jucatorNPC Jucatorul2;
    //cout<<"a creat jucatorii" <<endl;
    //Match meci (Jucatorul2, &Jucatorul);
    //cout<<meci.getStatus();

    std::vector<jucatorNPC> multime_jucatori= {};
    ifstream fin ("participanti.txt");
    jucatorNPC x;
    while (fin>>x){
        multime_jucatori.push_back(x);
        cout<<x.getNume()<<endl;
    }
}