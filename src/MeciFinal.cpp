//
// Created by RImoc on 5/19/2025.
//
#include "MeciFinal.h"
#include <iostream>
//#include <conio.h>

MeciFinal::MeciFinal(jucatorUtilizator& user, jucatorBoss& veteran) : user(user), veteran(veteran){
    system("cls");
    std::cout<<"Meciul final are loc intre tine si castigatorul turneului de anul trecut: Mauritio"<<std::endl;
    meci_style();
}
void MeciFinal:: meci_style() const {
    std::cout<<"Mauritio a ales sa joace: "<<veteran.getStyle()<<std::endl;
  std::cout<<"Alege stilul de joc: "<<std::endl<<"1. Agresiv"<<std::endl<<"2. Chill"<<std::endl<<"3. Calculat"<<std::endl;
  int optiune;
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;
  std::cin>>optiune;
  user.player_style(&veteran, optiune);
  veteran.player_style(&user, optiune);
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;

    std::cout<<"Runda a doua! Mauritio joaca acum "<<veteran.getStyle()<<std::endl;
    std::cout<<"Alege stilul de joc: "<<std::endl<<"1. Agresiv"<<std::endl<<"2. Chill"<<std::endl<<"3. Calculat"<<std::endl;

    std::cin>>optiune;
    user.player_style(&veteran, optiune);
    veteran.player_style(&user, optiune);
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;

    std::cout<<"Runda a treia! Mauritio joaca acum"<< veteran.getStyle()<<std::endl;;
    std::cout<<"Alege stilul de joc: "<<std::endl<<"1. Agresiv"<<std::endl<<"2. Chill"<<std::endl<<"3. Calculat"<<std::endl;

    std::cin>>optiune;
    user.player_style(&veteran, optiune);
    veteran.player_style(&user, optiune);
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;

    std::cin.ignore();

    std::cin.ignore();
}


