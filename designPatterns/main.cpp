#include <iostream>
using namespace std;
#include"RoundHole.h"
#include"RoundPeg.h"
#include"SquarePeg.h"
#include"SquarePegAdapter.h"

int main() {
    RoundHole hole1 = RoundHole(10);
    RoundPeg peg1 = RoundPeg(5);
    SquarePeg square1 =SquarePeg(10);
    hole1.fits(peg1);
    //hole1.fits(square1);

    SquarePegAdapter squareAdapter = SquarePegAdapter(0, square1);


    //cout<<squareAdapter.getRadius()<<endl;
    //hole1.fits(squareAdapter);

    return 0;
}
