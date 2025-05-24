//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include "../include/jucatorUtilizator.h"
#include <cmath>
using namespace std;


jucatorUtilizator::jucatorUtilizator() {
  this->categorie = "IV";
  std::cout<<"Numele jucatorului este: ";
  std::string nume1;
  std::cin>>nume1;
  setNume(nume1);
  creare_chestionar();
};
void jucatorUtilizator::creare_chestionar(){
  std::cout<< "Hello, "<< nume << "!" << std::endl;
  Chestionar chestionarul;
  int p = chestionarul.getPunctaj();
  std::cout << "Punctaj: " << p << std::endl;
  this->actualizare(p);
  cout<<"categorie: "<<categorie<<std::endl;
}


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

void jucatorUtilizator:: player_style(Jucator* veteran, int optiune){
    switch(optiune) {
      case 1://alege sa joace agresiv pentru:
        if (veteran->getStyle()=="chill") {
          this->setPunctaj(this->getPunctaj() + 1);
        }
      this->setStyle("agresiv");
      break;
      case 2://alege sa joace chill pentru:
        if (veteran->getStyle()=="calculat") {
          this->setPunctaj(this->getPunctaj() + 1);
        }
      this->setStyle("chill");
      break;
      case 3://alege sa joace calculat pentru:
        if (veteran->getStyle()=="agresiv") {
          this->setPunctaj(this->getPunctaj() + 1);
        }
      this->setStyle("calculat");
      break;
    }
  }

int jucatorUtilizator::getPunctaj() const {
    return punctaj;
  }
void jucatorUtilizator::setPunctaj(int punctaj1) {
    this->punctaj = punctaj1;
  }