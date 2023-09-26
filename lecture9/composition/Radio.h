#ifndef RADIO_H
#define RADIO_H

class Radio 
{
public:
    Radio(int v) : volume(v) {}
    void switchOn() { }
    void switchOff() { }
private:
    int volume;
};

#endif