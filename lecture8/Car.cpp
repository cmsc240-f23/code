#include <iostream>
#include <string>


class Engine {
private:
    int horsepower;
public:
    Engine(int h) : horsepower(h) {}
    int getHorsepower() const { return horsepower; }
};

class Car {
private:
    Engine engine;  // This is composition. Car "has-a" Engine.
    std::string model;
public:
    Car(const std::string& m, int h)
    {
        model = m;
        engine = {h};
    }

    void describe() const {
        std::cout << "Model: " << model << ", Horsepower: " << engine.getHorsepower() << std::endl;
    }
};

int main() {
    Car car("Toyota", 150);
    car.describe();
}
