//
// Created by garroakion on 20/3/21.
//

#ifndef DESIGNPATTERNS_SQUAREPEGADAPTER_H
#define DESIGNPATTERNS_SQUAREPEGADAPTER_H


#include "SquarePeg.h"
#include "RoundPeg.h"

class SquarePegAdapter:public RoundPeg {
private:
    SquarePeg peg= SquarePeg(0);
public:
    SquarePegAdapter(int radius, SquarePeg peg);
    int getRadius();
};


#endif //DESIGNPATTERNS_SQUAREPEGADAPTER_H
