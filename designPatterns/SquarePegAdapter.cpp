//
// Created by garroakion on 20/3/21.
//

#include "SquarePegAdapter.h"
#include <cmath>
using namespace std;


SquarePegAdapter::SquarePegAdapter(int radius, SquarePeg peg) : RoundPeg(radius) {
        this->peg = peg;
        this->radius = getRadius();
}

int SquarePegAdapter::getRadius() {
    return ((this->peg.getWidth()) * (sqrt(2) / 2));
}
