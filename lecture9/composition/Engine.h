#ifndef ENGINE_H
#define ENGINE_H

class Engine 
{
public:
    Engine(int hp) : horsepower(hp) {}
    void start() { }
    void stop() { }
private:
    int horsepower;
};

#endif