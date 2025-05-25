//
// Created by RImoc on 5/19/2025.
//
#include "MeciFinal.h"
#include "exceptie.h"
#include <iostream>
#include <limits>

MeciFinal::MeciFinal(jucatorUtilizator& user, jucatorBoss& veteran) : user(user), veteran(veteran){
    system("cls");
    std::cout<<"Meciul final are loc intre tine si castigatorul turneului de anul trecut: Mauritio"<<std::endl;
    meci_style();
}
void MeciFinal:: meci_style() const {
    veteran.setStyle("agresiv");
    std::cout<<"Mauritio a ales sa joace: "<<veteran.getStyle()<<std::endl;
  //std::cout<<"Alege stilul de joc: "<<std::endl<<"1. Agresiv"<<std::endl<<"2. Chill"<<std::endl<<"3. Calculat"<<std::endl;
    int optiune = choose_style("Alege stilul de joc:\n1. Agresiv\n2. Chill\n3. Calculat\n");

    user.player_style(&veteran, optiune);
    veteran.player_style(&user, optiune);
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;

    std::cout<<"Runda a doua! Mauritio joaca acum "<<veteran.getStyle()<<std::endl;

    optiune = choose_style("Alege stilul de joc:\n1. Agresiv\n2. Chill\n3. Calculat\n");
    user.player_style(&veteran, optiune);
    veteran.player_style(&user, optiune);
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;

    std::cout<<"Runda a treia! Mauritio joaca acum "<< veteran.getStyle()<<std::endl;

    optiune = choose_style("Alege stilul de joc:\n1. Agresiv\n2. Chill\n3. Calculat\n");
    user.player_style(&veteran, optiune);
    veteran.player_style(&user, optiune);
    std::cout<<std::endl<<"Punctaj: "<<user.getPunctaj()<<std::endl;
    if (user.getPunctaj()==3) {
        std::cin.ignore();
        system("cls");
        std::cout<<"Felicitari! Ai castigat un bilet la BeachPlease!";
        std::cin.ignore();
    }
    else {
        std::cin.ignore();
        system("cls");
        std::cout<<"Ne pare rau! Ati pierdut meciul.";
        std::cin.ignore();
    }
}

int MeciFinal::choose_style(const std::string& prompt) const {
    int optiune, nr_incercari = 3;
    while (nr_incercari > 0) {
        try {
            std::cout << prompt;
            std::cin >> optiune;
            Exceptie::verifica_inp(optiune);
            return optiune;
        } catch (const std::exception& e) {
            nr_incercari--;
            std::cerr << "Eroare: " << e.what() << "\n";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return 1;
}
