#ifndef DATE_H
#define DATE_H

enum class Month
{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date
{
public:
    Date(int yyyy, Month mm, int dd);  // constructor using enum
    void add_day(int num);
    int getYear() { return year; }
    int getMonth() { return int(month); }
    int getDay() { return day; }
private:
    int year;
    Month month;
    int day;
    bool is_valid();
};

#endif

