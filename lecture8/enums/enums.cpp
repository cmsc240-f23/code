enum class Month
{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

int main() 
{
    Month secondMonth = Month::feb;       // Correct

    Month lastMonth = dec;                // Error: dec is not in scope

    Month thisMonth = 9;                  // Error: can't assign an int to a Month type
}

enum class Day
{
    mon, tue, wed, thr, fri, sat, sun
};
