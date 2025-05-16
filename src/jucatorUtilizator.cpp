//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string.h>
#include "../include/jucatorUtilizator.h"
#include <cmath>
using namespace std;


jucatorUtilizator::jucatorUtilizator() {
  this->categorie = "IV";
  std::cout<<"Numele jucatorului este: ";
  std::string nume1;
  std::cin>>nume1;
  setNume(nume1);
  std::cout<< "Hello, "<< nume << "!" << std::endl;
  Chestionar chestionarul;
  int p = chestionarul.getPunctaj();
  std::cout << "Punctaj: " << p << std::endl;
  this->actualizare(p);
  cout<<"categorie: "<<categorie<<std::endl;
};


void jucatorUtilizator:: actualizare(int p){
    int newElo = getElo();
    if (p==1){
      this->categorie = "III";
      newElo += rand () % 201+200;
    }
    else if (p==2){
      newElo+= rand() % 401 +200;
      this->categorie = "II";
    }
    else if(p==3){
      newElo+=rand () % 601 +200;
      this->categorie = "I";
    }
    else if (p==4){
      newElo += rand () % 801 +200;
      this->categorie = "candidat_de_maestru";
    }
    else if (p==5){
      newElo+= rand () % 1000 +200;
      this->categorie = "maestru";
    }
    setElo(newElo);
    };


  void jucatorUtilizator:: afisareJucator(){
  Jucator::afisareJucator();
  std::cout<<"categorie: "<<categorie<<endl;
}