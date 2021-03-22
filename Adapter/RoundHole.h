//
// Created by garroakion on 20/3/21.
//

#ifndef DESIGNPATTERNS_ROUNDHOLE_H
#define DESIGNPATTERNS_ROUNDHOLE_H


#include "RoundPeg.h"

class RoundHole {
private:
    int radius;

public:
    RoundHole(int radius);
    int getRadius();
    void fits(RoundPeg peg);
};


#endif //DESIGNPATTERNS_ROUNDHOLE_H
