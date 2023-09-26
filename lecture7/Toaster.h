#ifndef TOASTER_H
#define TOASTER_H

#include <string>

class Toaster
{
public:
    Toaster(int initialLevel);
    void toast();
    void cancel();
    bool isOn() const;
    int getLevel() const;
    void setLevel(int newLevel);
    std::string getStatus();
private:
    int heatLevel;
    bool isToasting;
    bool isValidLevel(int level);
};

#endif








