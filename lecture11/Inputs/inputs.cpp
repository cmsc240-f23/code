int area(int length, int width)
{
	return length * width;
}

int main()
{
    int result1 = area(7);	   	    // error: wrong number of arguments

    int result2 = area("seven", 2);	// error: 1st argument has a wrong type

    int result3 = area(7, 10);		// ok

    int result4 = area(7.5, 10);	// ok, but dangerous: 7.5 truncated to 7

    int result5 = area(10, -7); 	// ok, but this is a difficult case:
                                    // the types are correct,
                                    // but the values make no sense

    return 0;
}


