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
  ~jucatorNPC() override = default;

  friend std::istream& operator>>(std::istream& fin, jucatorNPC& );

  void player_style(Jucator*, int) override;

  jucatorNPC(const jucatorNPC& other);
};
