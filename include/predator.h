//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.

#ifndef INCLUDE_PREDATOR_H_
#define INCLUDE_PREDATOR_H_

#include <string>
#include <vector>
#include <iostream>

#include "../include/prey.h"

class Predator : public Prey {
 protected:
  int hungerPoints;
  void breed() override;
  virtual void attack();
 public:
  Predator(Cell* newCell = nullptr,
           int newHealthpoints = 4, int newBreedRate = 4,
           int newHungerPoints = 3):
  Prey(newCell, newHealthpoints, newBreedRate),
  hungerPoints(newHungerPoints) {
    this->objType = ObjType::PREDATOR;
  }
  ~Predator() override;
  void live() override;
  void death() override;
};

#endif  // INCLUDE_PREDATOR_H_
