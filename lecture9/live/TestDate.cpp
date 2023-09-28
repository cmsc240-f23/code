class Date
{
public:
    Date(int yyyy, int mm, int dd);
    void addDays(int num);
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
private:
    int year, month, day;
    bool isValid();
};



Date::Date(int yyyy, int mm, int dd)
    : year{yyyy}, month{mm}, day{dd}
{
    isValid();
}

void Date::addDays(int num)
{
    day += num;
}

bool Date::isValid()
{
    return true;
}

int main()
{
}