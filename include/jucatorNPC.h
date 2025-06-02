//
// Created by RImoc on 5/15/2025.
//
#pragma once
#include "jucator.h"
#ifndef JUCATORNPC_H
#define JUCATORNPC_H

#endif //JUCATORNPC_H
class jucatorNPC : public Jucator {
public:
  jucatorNPC();
  jucatorNPC(const std::string& nume, int elo);
  ~jucatorNPC() override = default;

  friend std::istream& operator>>(std::istream& fin, jucatorNPC& );
  friend std::ostream& operator<<(std::ostream& fout, const jucatorNPC& juc);
  void player_style(Jucator*, int) override;

  jucatorNPC(const jucatorNPC& juc);

  jucatorNPC& operator=(const jucatorNPC& other);

};
