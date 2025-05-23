//
// Created by RImoc on 5/19/2025.
//
#include "MeciFinal.h"
#include <iostream>
#include <limits>

MeciFinal::MeciFinal(jucatorUtilizator& user, jucatorBoss& veteran) : user(user), veteran(veteran){
    system("cls");
    std::cout<<"Meciul final are loc intre tine si castigatorul turneului de anul trecut: Mauritio"<<std::endl;
    meci_style();
}
void MeciFinal:: meci_style() const {
    std::cout<<"Mauritio a ales sa joace: "<<veteran.getStyle()<<std::endl;
  //std::cout<<"Alege stilul de joc: "<<std::endl<<"1. Agresiv"<<std::endl<<"2. Chill"<<std::endl<<"3. Calculat"<<std::endl;
  int optiune;
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;
    optiune = choose_style("Alege stilul de joc:\n1. Agresiv\n2. Chill\n3. Calculat\n");

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

int MeciFinal::choose_style(const std::string& prompt) const {
    int optiune;
    while (true) {
        try {
            std::cout << prompt;
            std::cin >> optiune;

            if (std::cin.fail()) {
                throw std::invalid_argument("Introdu un numar");
            }

            if (optiune < 1 || optiune > 3) {
                throw std::out_of_range("Introdu un numar intr 1, 2 si 3");
            }

            return optiune;
        } catch (const std::exception& e) {
            std::cerr << "Eroare: " << e.what() << "\n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }
    }
}
