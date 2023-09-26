#include "PacMan.h"
#include <iostream>
using namespace std;

PacMan::PacMan(){}

// Operator overloading of ()
// Makes Pac-Man eat dots...
void PacMan::operator()(int dots)
{
    numberOfDotsEaten += dots;
}
// Operator overloading of ->
// Makes Pac-Man go right.
PacMan* PacMan::operator->()
{
    currentDirection = Direction::right;
    return this;
}
int main()
{
    PacMan pacman;

    // Eat 10 dots... using overload of ()
    pacman(10);

    // Go right!  using overload of -> "arrow"
    pacman->go;

    cout << pacman.getNumDotsEaten() << endl;
    cout << pacman.getDirection() << endl;
}