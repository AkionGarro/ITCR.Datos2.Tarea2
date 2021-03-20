//
// Created by garroakion on 20/3/21.
//
#include <iostream>
#include "RoundHole.h"
using namespace std;

RoundHole::RoundHole(int radius) {
 this->radius = radius;
}

int RoundHole::getRadius() {
    return this->radius;
}

void RoundHole::fits(RoundPeg peg) {
    if (getRadius() < peg.getRadius()){
        cout<<"The object radius is bigger than hole radius"<<endl;

    }else{
        cout<<"The object entered satisfactorily "<<endl;
    }
}
