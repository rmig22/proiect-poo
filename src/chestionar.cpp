//
// Created by RImoc on 5/13/2025.
//
#include "chestionar.h"
#include <jucator.h>
#include <iostream>
#include <vector>
using namespace std;

Chestionar::Chestionar() {
    intrebarile_totale = {
        Intrebare("1. What happens when a pawn reaches the other side of the board?", "It turns into a queen", {"It explodes", "It turns into a queen","It retires", "It throws a party"}),
        Intrebare("2. Why did the chess player bring snacks to the match?", "Because he expected a knight to be long", {"To bribe the opponent", "For emotional support"," Because he expected a knight to be long", "He confused it with a picnic"}),
        Intrebare("3. What does it mean when your king is in check?", "Your king is under threat", {"You’re winning", "You can castle"," Your king is under threat", "Your king is at the bank"}),
        Intrebare("4. What do you say when you win in chess?", "Checkmate", {"Game over", "Bye-bye, bishop","Checkmate", "Uno!"}),
        Intrebare("5. Because they don’t want to get passed over", "Because they don’t want to get passed over", {"They’re too quiet", "They’re loyal foot soldiers","Because they might leak during promotion", "Because they don’t want to get passed over"})
    };
};

void Chestionar::afiseazaIntrebari() {
    for (const auto& i : intrebarile_totale) {
        std::cout << i.getIntr() << std::endl;

        const auto& variante = i.getRaspunsuri();
        for (size_t j = 0; j < variante.size(); ++j) {
            std::cout << j + 1 << ". " << variante[j] << std::endl;
        }

        std::cout << std::endl;
    }
}

