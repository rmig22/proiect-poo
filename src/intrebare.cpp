//
// Created by RImoc on 5/13/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include "../include/intrebare.h"

const std::string& Intrebare::getIntr() const {
    return intr;
}

char Intrebare::getRaspuns() const {
    return raspuns;
}

const std::vector<std::string>& Intrebare::getRaspunsuri() const {
    return variante;
}

// void Intrebare::setRaspuns(char *c) {
//     this->raspuns = c[0];
// }

// Intrebare& Intrebare::operator=(const Intrebare& obj) {
//     this->getIntr().replace(this->getIntr().begin(), this->getIntr().end(), obj.getIntr());
//     this->setRaspuns(obj.getRaspuns());
//
//     for (int i = 0; i < 5; i++) {
//       this->getRaspunsuri()[i].replace(this->getRaspunsuri()[i].begin(), this->getRaspunsuri()[i].end(), obj.getRaspunsuri()[i]);
//     }
//   return *this;
// }

std::ostream& operator << (std::ostream& c, const Intrebare &i) {
    c<<i.getIntr()<< std::endl;//<< i.getRaspunsuri() << std::endl << "Raspuns: ";
    for (const auto& x : i.getRaspunsuri()) {
        c<<x<<std::endl;
    }
    c << "Raspuns: ";
    return c;
}
