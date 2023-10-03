#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date();                          
    Date(int yyyy, int mm, int dd);  
    void add_day(int num);           
    int getYear(); 
    int getMonth();
    int getDay();
    static int DEFAULT_YEAR;
    static void setDefaultYear(int yearDefault);
private:
    int year, month, day;
    bool is_valid();
};

#endif

