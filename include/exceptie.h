//
// Created by RImoc on 5/22/2025.
//
#pragma once
#include <exception>
#include <iostream>
#ifndef EXCEPTIE_H
#define EXCEPTIE_H


class Exceptie : public std::exception {
  std::string mesaj;
  public:
    explicit Exceptie(std::string& mesaj);

    explicit Exceptie(const std::string& str);

    ~Exceptie() override = default;

    const char* what() const noexcept override;
    static void verifica(const std::string &rasp);
    static void verifica_inp(const int optiune);
};
#endif //EXCEPTIE_H