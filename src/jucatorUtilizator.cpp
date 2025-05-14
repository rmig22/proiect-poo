//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string.h>
#include "../include/jucatorUtilizator.h"
#include "../include/jucator.h"
#include <cmath>
using namespace std;


jucatorUtilizator::jucatorUtilizator() {
  std::cout<<"Numele jucatorului este: ";
  std::string nume1;
  std::cin>>nume1;
  setNume(nume1);
  std::cout<< "Hello, "<< nume << "!" << std::endl;
  Chestionar chestionarul;
  std::cout << "Punctaj: " << chestionarul.getPunctaj() << std::endl;
};
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