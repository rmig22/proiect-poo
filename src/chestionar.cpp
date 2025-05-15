//
// Created by RImoc on 5/13/2025.
//
#include "../include/chestionar.h"
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <random>
#include <bits/stdc++.h>

Chestionar::Chestionar() {
    this->intrebarile_totale = {
        Intrebare("1. What happens when a pawn reaches the other side of the board?", 'b', {"a). It explodes", "b). It turns into a queen","c). It retires", "d). It throws a party"}),
        Intrebare("2. Why did the chess player bring snacks to the match?", 'c', {"a). To bribe the opponent", "b). For emotional support","c). Because he expected a knight to be long", "d). He confused it with a picnic"}),
        Intrebare("3. What does it mean when your king is in check?", 'c', {"a). You're winning", "b). You can castle","c). Your king is under threat", "d). Your king is at the bank"}),
        Intrebare("4. What do you say when you win in chess?", 'c', {"a). Game over", "b). Bye-bye, bishop","c). Checkmate", "d). Uno!"}),
        Intrebare("5. Why don't pawns ever talk during a chess game?", 'd', {"a). They're too quiet", "b). They're loyal foot soldiers","c). Because they might leak during promotion", "d). Because they don't want to get passed over"}),
        Intrebare("6. What's the Queen's superpower?", 'b', {"a). Instant checkmate by glare ", "b). Unlimited diagonal and straight-line movement", "c). Mind control", "d). Shopping across the board"}),
        Intrebare("7. What's castling, really?", 'a', {"a). When the King runs behind the Rook for safety", "b). A medieval dating ritual","c). King and Rook swapping fashion tips", "d). Chess yoga"}),
        Intrebare("8. Why don't pawns skip their first move opportunity to go two spaces?", 'd', {"a). They're afraid of commitment", "b). That's their one chance to feel special","c). They think they'll trip", "d). Chess rules only allow it once"}),
        Intrebare("8. What happens if you try to move a piece through another one illegally?", 'd', {"a). It files a lawsuit", "b). The board self-destructs","c). The move is not allowed", "d). The chess gods smite you"})
    };
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(intrebarile_totale.begin(), intrebarile_totale.end(), rng);
    for (int i=0; i<5; i++) {
        set_intrebari.push_back(intrebarile_totale[i]);
    }


    int P = 0;
    for (Intrebare& i : set_intrebari) {
        std::cout << i;
        char r;
        std::cin>>r;
        r = tolower(r);
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

void Chestionar::afiseazaIntrebari() {
    for (const auto& i : set_intrebari) {
        std::cout << i.getIntr() << std::endl;

        const auto& variante = i.getRaspunsuri();
        for (size_t j = 0; j < variante.size(); ++j) {
            std::cout << j + 1 << ". " << variante[j] << std::endl;
        }

        std::cout << std::endl;
    }
}

int Chestionar::getPunctaj() const {
    return punctaj;
}