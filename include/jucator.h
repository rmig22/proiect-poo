//
// Created by RImoc on 5/13/2025.
//

#ifndef JUCATOR_H
#define JUCATOR_H
#include <string>
#include <iostream>
class Jucator{
protected:
    std::string nume;
    int elo = 1000;
    std::string categorie;
    std::string style;
    // void afisareJucator(){
    //   std::cout<<"nume:" <<nume<< " "<< "elo: "<< elo;
    //   }

public:

    Jucator();
    Jucator(const std::string& nume, int elo);// : nume(nume), elo(elo){};
    Jucator(const Jucator& alt);
    Jucator& operator=(const Jucator& alt);
    const std::string& getNume() const;
    int getElo() const;
    std::string& getCategorie();
    //Chestionar getChestionar() const;
    void setNume(std::string nume);
    void setElo(int elo);
    std::string& getStyle();
    //void setChestionar(Chestionar chestionar);
    void setCategorie(const std::string& cat);
    // virtual void afisareJucator();
    virtual ~Jucator() = default;
    //void static intdinfisier(std::string& fisier);
    virtual void player_style(Jucator* jucator, int optiune) = 0;
    void setStyle(const std::string &style);
    int operator-(const Jucator& alt) const;
};

#endif //JUCATOR_H

