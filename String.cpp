#include<iostream>
//include the string library
#include <string>
using namespace std;
int main()
{
    string name="shrinija";
    cout<<name;
    string surname="konale";
    cout<<endl;
    cout<<endl;
    
    //concatenation

    
    // A string in cpp is actually an object, which contain function that perform certain operations on strings. for example , you can also concatenate string with the append() function.

    string fullname=name+" "+surname;
    cout<<endl;
    cout<<endl;
    cout<<fullname;


/*

int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)

cout<<endl <<z;


string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)
cout<<endl<<z;


*/

/*


string x = "10";
int y = 20;
string z = x + y;
cout<<endl<<z;             // error

*/

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout<<endl;
cout << "The length of the txt string is: " << txt.length();
cout<<endl;

/*
Tip: You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length(). It is completely up to you if you want to use length() or size():

*/

string txts = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout<<endl;
cout << "The length of the txt string is: " << txts.size();
cout<<endl;

/*
You can access the characters in a string by referring to its index number inside square brackets []
*/

string myString = "Hello";
cout << myString[0];
// Outputs H


//Change String Characters

string mystring = "Hello";
mystring[0] = 'J';
cout << mystring;
//Outputs Jello instead of Hello


//user input

string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John

}

//................................................................................................................................

#include <iostream>
#include <string>

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}

output: Hello

//........................................................................................................................................
