//
// Created by RImoc on 5/13/2025.
//

#ifndef JUCATOR_H
#define JUCATOR_H
#include <string>
#include <iostream>

class Jucator {
protected:
    std:: string nume;
    int elo; //elo este ratingul jucatorului
    // void afisareJucator(){
    //   std::cout<<"nume:" <<nume<< " "<< "elo: "<< elo;
    //   }

public:

    std::string getNume();
    int getElo();
    void setNume(std::string& nume);
    void setElo(int elo);

    Jucator(const std::string& nume, int elo);
    virtual void afisareJucator();
    //void static intdinfisier(std::string& fisier);
};

#endif //JUCATOR_H
