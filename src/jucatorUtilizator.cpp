//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string.h>
#include "jucatorUtilizator.h"
#include "jucator.h"
using namespace std;


jucatorUtilizator:: jucatorUtilizator(const std::string&nume, int elo) : Jucator(nume, elo) {};
void jucatorUtilizator:: actualizare(){
    int newElo = getElo();
    if (categorie == "I"){
      newElo += rand () % 101;
    }
    else if (categorie == "II"){
      newElo+= rand() % 201 +100;
    }
    else if(categorie == "III"){
      newElo+=rand () %301 +100;
    }
    else if (categorie == "candidat_de_maestru"){
      newElo += rand () % 401 +100;
    }
    else if (categorie == "maestru"){
      newElo+= rand () % 501 +100;
    }
    setElo(newElo);
    };


  void jucatorUtilizator:: afisareJucator(){
  Jucator::afisareJucator();
  std::cout<<"categorie: "<<categorie<<endl;
}