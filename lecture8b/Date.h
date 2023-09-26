#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date();                          
    Date(int yyyy, int mm, int dd);  
    void add_day(int num);           
    int getYear() { return year; }   
    int getMonth() { return month; }
    int getDay() { return day; }
    static int DEFAULT_YEAR;
    static void setDefaultYear(int yearDefault);
private:
    int year, month, day;
    bool is_valid();
};

#endif

