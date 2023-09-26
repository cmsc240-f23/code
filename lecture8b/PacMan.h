#ifndef PACMAN_H
#define PACMAN_H

enum class Direction
{
    right=1, left, up, down
};

class PacMan
{
public:  
    PacMan();  // Constructor
   
    void operator()(int dots);    // Overload ()
    PacMan* operator->(); // Overload ->
    char go;
    int getLocationX() const { return locationX; }
    int getLocationY() const { return locationY; }
    int getDirection() const { return int(currentDirection); }
    int getNumDotsEaten() const { return numberOfDotsEaten; }
private:
    int locationX = 0;
    int locationY = 0;
    int numberOfDotsEaten = 0;
    Direction currentDirection = Direction::left;
};

#endif