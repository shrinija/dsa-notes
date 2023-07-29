https://www.geeksforgeeks.org/substring-in-cpp/



//...........................................................................................

// Convert a String to an Integer using Recursion


#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str)
{
	if (str.length() == 1)
		return (str[0] - '0');

	int x = str[0] - '0';
	int  y = stringToInt(str.substr(1));

	x = x * pow(10, str.length() - 1) + y;
	return int(x);
}

int main()
{
	string str = "1235";
	cout << (stringToInt(str)) << endl;
}

//.........................................................................................................
