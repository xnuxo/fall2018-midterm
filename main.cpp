/**
 * 	Name: main.cpp
 *	Developer: Jude McParland
 *	Email: judem6968@student.vvc.edu
 *	Date: 10-18-18
 *	Description: A simple program that prompts a user to enter a string and a specific charater to count for within that string. 
**/

#include <iostream>
#include <string>

using namespace std;

int get_string(string question, string question2);
int char_count(string str, char ch);

int main()
{
	cout << get_string("Please enter a string: ", "Enter the letter or number you wish to search and count: ") << " charaters match your given search charater." << endl;
	return 0;
}

int get_string(string question, string question2)
{
	cout << question; // Prompt and get input for the first question's string.
	string str; 
	getline(cin, str);
	
	cout << question2; // Prompt and get input for the second question's string.
	char ch;
	cin >> ch;

	return char_count(str, ch); // Call the char_count() and return its return. 
}

int char_count(string str, char ch)
{
	int count = 0;
	for(int x = 0; x < str.length(); x++)
	{
		if(toupper(str.at(x)) == toupper(ch)) // Convert both the string to uppercase and the char to uppercase.
			count++;
	}
	return count;
}
