/*Excercise B (2p) Vector of strings
* 
* 
Write a program that reads strings from the keyboard. There is no upper limit for the 
number of strings. All strings are stored in a vector of strings. The data entry phase 
terminates when the user enters the “stop” string. This termination string is not stored in 
the vector.
When all strings have been entered the program displays all strings from the vector and 
the number of strings entered. Then the program finds out the longest string from the 
array and prints the longest string and its length.
The last thing the program does is that it displays the values returned by the member 
functions size and capacity of the vector. */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


//Function to go thro the string!
static bool longest_string(string start, string end) {
	return (start.size() < end.size());
}
//Main function of the programm!
int main() {
	string user_input, longest;
	vector<string> my_text;
	int longest_size = 0;

	//Using while loop for user input and also pushing the strings into the vector!
	cout << "--> Please write your text! " << endl;
	while (user_input != "stop") {
		cin >> user_input;
		if (user_input != "stop") {
			my_text.push_back(user_input);
		}
	}

	//Displaying all the strings which are in the vector using for loop!
	cout << "--> Displaying all the strings from the vector:" << endl;
	for (int i = 0; i < my_text.size(); i++) {
		cout << my_text[i] << endl;
	}

	//
	auto result{max_element(my_text.begin(), my_text.end(), longest_string) };
	auto elem{distance(my_text.begin(), result) };
	cout << "The largest string is : " << my_text[elem] << '\n';
	cout << "Largest string size is: " << my_text[elem].size() << '\n';
}







//The same task but not using a function to find the longest string!!!!
//Main function of the programm!
/**
int main() {
	string user_input, longest;
	vector<string> my_text;
	int longest_size = 0;
	
	//Using while loop for user input and also pushing the strings into the vector!
	cout << "--> Please write your text! " << endl;
	while (user_input != "stop") {
		cin >> user_input;
		if (user_input != "stop") {
			my_text.push_back(user_input);
		}
	}

	//Displaying the vector of strings!
	cout << "--> Displaying all the strings from the vector:" << endl;
	for (int i = 0; i < my_text.size(); i++) {
		cout << my_text[i] << endl;

		//Finding the longest string and the size of it!
		if (my_text[i].length() > longest.length()) {
			longest = my_text[i];
			longest_size = longest.length();
		}

	}
	//Printing the longest string and its length!
	cout << "---> The longest word is: " << endl;
	cout << longest << endl;

	cout << "---> The length of the longest word is: " << endl;
	cout << longest_size << endl;
	
}
*/