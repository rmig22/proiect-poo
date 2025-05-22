//
// Created by RImoc on 5/22/2025.
//
#include <exception>
#include <iostream>
#ifndef EXCEPTIE_H
#define EXCEPTIE_H

#endif //EXCEPTIE_H
class Exceptie : public std::exception {
  std::string mesaj;
  public:
    Exceptie(std::string& mesaj);

  explicit Exceptie(const std::string& str);

  ~Exceptie() = default;

    const char* what() const noexcept override;
};