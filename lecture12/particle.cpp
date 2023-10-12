#include <iostream>

class Particle {
public:
    Particle(float x, float y) : posX(x), posY(y) {}

    void move(float dx, float dy) {
        posX += dx;
        posY += dy;
    }

    void printPosition() const {
        std::cout << "Position: (" << posX << ", " << posY << ")" << std::endl;
    }

private:
    float posX, posY;
};

void calculate(Particle* part) {
    part->move(1.2, 3.4);
}

int main() {
    
    Particle* p1 = new Particle(5.0, 7.5);
    // STACK ^^         HEAP ^^^^
    
    p1->move(2.0, -3.0);
    p1->printPosition();

    calculate(p1);

    // Some code here...
    delete p1;

    return 0;
}
