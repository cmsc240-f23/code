#ifndef SYSTEM_DATE_H
#define SYSTEM_DATE_H

class SystemDate
{
public:
    // NO public constructor        
    int getYear() { return year; }   
    int getMonth() { return month; }
    int getDay() { return day; }
    static SystemDate* getInstance();      
private:                        
    SystemDate(int yyyy, int mm, int dd);  // Private constructor
    int year, month, day;
    bool is_valid();
    static SystemDate* instancePointer;    
};

#endif

