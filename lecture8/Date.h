#pragma once
#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date();                          // default constructor
    Date(int yyyy, int mm, int dd);  // constructor
    void add_day(int num);           
    int getYear() { return year; }   // inline method declarations
    int getMonth() { return month; }
    int getDay() { return day; }
    static const int DEFAULT_YEAR = 2001;
private:
    int year, month, day;
    bool is_valid();
};

#endif

