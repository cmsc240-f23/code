#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date(int yyyy, int mm, int dd);  // constructor
    void addDays(int num);           
    int getYear() { return year; }   // inline method declarations
    int getMonth() { return month; }
    int getDay() { return day; }
private:
    int year, month, day;
    bool isValid();
};

#endif

