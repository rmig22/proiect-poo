//
// Created by RImoc on 5/13/2025.
//
#include "../include/chestionar.h"
#include "exceptie.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
Chestionar::Chestionar() {
    this->intrebarile_totale = {
        Intrebare("What happens when a pawn reaches the other side of the board?", 'c', {"a). It explodes", "b). It turns into a queen","c). It retires", "d). It throws a party"}),
        Intrebare("Why did the chess player bring snacks to the match?", 'c', {"a). To bribe the opponent", "b). For emotional support","c). Because he expected a knight to be long", "d). He confused it with a picnic"}),
        Intrebare("What does it mean when your king is in check?", 'c', {"a). You're winning", "b). You can castle","c). Your king is under threat", "d). Your king is at the bank"}),
        Intrebare("What do you say when you win in chess?", 'c', {"a). Game over", "b). Bye-bye, bishop","c). Checkmate", "d). Uno!"}),
        Intrebare("Why don't pawns ever talk during a chess game?", 'c', {"a). They're too quiet", "b). They're loyal foot soldiers","c). Because they might leak during promotion", "d). Because they don't want to get passed over"}),
        Intrebare("What's the Queen's superpower?", 'c', {"a). Instant checkmate by glare ", "b). Unlimited diagonal and straight-line movement", "c). Mind control", "d). Shopping across the board"}),
        Intrebare("What's castling, really?", 'c', {"a). When the King runs behind the Rook for safety", "b). A medieval dating ritual","c). King and Rook swapping fashion tips", "d). Chess yoga"}),
        Intrebare("Why don't pawns skip their first move opportunity to go two spaces?", 'c', {"a). They're afraid of commitment", "b). That's their one chance to feel special","c). They think they'll trip", "d). Chess rules only allow it once"}),
        Intrebare("What happens if you try to move a piece through another one illegally?", 'c', {"a). It files a lawsuit", "b). The board self-destructs","c). The move is not allowed", "d). The chess gods smite you"})
    };
    std::random_device rd;
    std::mt19937 rng(rd());
    std::ranges::shuffle(intrebarile_totale, rng);
    for (int i=0; i<5; i++) {
        set_intrebari.push_back(intrebarile_totale[i]);
    }


    int P = 0;
    //std::cin.get();
    std::cin.get();
    for (const Intrebare& i : set_intrebari) {
        std::cout << i;
        char r = '\0';
        std::string test_r="";
        int incercari = 2;
        while (incercari!=0) {
            if (!std::getline(std::cin, test_r)) {
                std::cerr << "InputError: End of input or input failure." << std::endl;
                break;
            }
            try {
                Exceptie::verifica(test_r);
                break;
            }
            catch (const Exceptie& e) {
                std::cerr << "InputError: " << e.what() << std::endl;
                if (incercari!=1)
                    std::cout << "Incercati din nou: ";
                incercari--;
            }
        }
            r = test_r[0];
        if (r == i.getRaspuns()) {
            std::cout<< std::endl<<"Corect!"<<std::endl<<std::endl;
            P+=1;
        }
        else {
            std::cout<<std::endl<<"Gresit!"<<std::endl<<"Raspunsul corect este:"<<std::endl<<i.getRaspuns()<<std::endl<<std::endl;
        }
    }
    this->punctaj = P;
};

// void Chestionar::afiseazaIntrebari() const {
//     for (const auto& i : set_intrebari) {
//         std::cout << i.getIntr() << std::endl;
//
//         const auto& variante = i.getRaspunsuri();
//         for (size_t j = 0; j < variante.size(); ++j) {
//             std::cout << j + 1 << ". " << variante[j] << std::endl;
//         }
//
//         std::cout << std::endl;
//     }
// }

int Chestionar::getPunctaj() const {
    return punctaj;
}