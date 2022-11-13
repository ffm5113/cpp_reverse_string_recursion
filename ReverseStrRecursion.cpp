// Source(s) of logic assistance:  
// Gaddis, T. (2018). Starting out with C++:
// From control structures through objects. Pearson. 

#include <iostream> // To use cin/cout
#include <string>   // To implement to_string function
using namespace std;

// Global Constant Initialization
const string TITLE = "Reverse String Recursion Program";
const string AUTHOR_LINE = "By Forrest Moulin";

// Function prototypes to notify compiler
void reverseStr(string intputStr, int i);

int main()
{
	// Dynamic Variable Initialization
	string inputString;

	// Program Logic
	cout << TITLE << endl
		<< AUTHOR_LINE << endl << endl;

	cout << "Please enter a string to reverse."
		<< endl << endl;

	// Get the string line from the user
	getline(cin, inputString);
	// Call the function to reverse the string
	reverseStr(inputString, inputString.length());
}
void reverseStr(string inputStr, int i)
{
	// Print the last letter of the string
	cout << inputStr[i];
	if (i == 0)
	{
		cout << endl << endl << "Base case reached." << endl
			<< "Until next time! :)" << endl;
	}
	else
	{
		// Recursive call, reducing i each time, printing
		// from the rightmost char to the leftmost char
		reverseStr(inputStr, i - 1);
	}
}
/*
* CONSOLE OUTPUT # 1
* Reverse String Recursion Program
* By Forrest Moulin
*
* Please enter a string to reverse.
*
* Howdy, partner!
* !rentrap ,ydwoH
*
* Base case reached.
* Until next time! :)
* 
* CONSOLE OUTPUT # 2
* Reverse String Recursion Program
* By Forrest Moulin
*
* Please enter a string to reverse.
*
* WOW RACECAR
* RACECAR WOW
*
* Base case reached.
* Until next time! :)
*/
