//
// Created by garroakion on 20/3/21.
//
#include <iostream>
#include "RoundHole.h"
using namespace std;

RoundHole::RoundHole(int radius_) {
 this->radius = radius_;
}

int RoundHole::getRadius() {
    return this->radius;
}

bool RoundHole::fits(RoundPeg peg) {
    if (getRadius() >= peg.getRadius()){
        cout<<"The object entered satisfactorily "<<endl;
        return true;
    }else{
        cout<<"The object radius is bigger than hole radius"<<endl;
        return false;
    }
}
