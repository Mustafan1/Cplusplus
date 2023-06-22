/*Excercise B (2p) Parameter passing and more algorithms
Write a function called backwards that takes a reference to a vector of strings as a 
parameter. The function reverses all strings in the vector and then sorts the vector in 
descending order. Hint: algorithms: sort, reverse
Write a program that reads strings from the keyboard. There is no upper limit for the 
number of strings. All strings are stored in a vector of strings. The data entry phase 
terminates when the user enters the “stop” string. This termination string is not stored in 
the vector.
When all strings have been entered the program prints the vector elements on separate
lines. Then program calls backwards and passes the vector as parameter. After the call the 
program prints the vector again. 
For example:
If original content of the vector is:
acb
Doom
Beast
option
dentax
After calling backwards the vector contains:
xatned
tsaeB
noitpo
mooD
bca*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

//Function to reverse and sort strings of the vector.
void backwards(vector<string>& text) {
	for (int i = 0; i < text.size(); i++)
		reverse(text.begin(), text.end());
	for (const auto &i :text)
		sort(text.begin(), text.end());
	    
}

// The main funciton of the program!
int main() {

	string str;
	vector<string>my_text;

	//Asking for the usre input
	cout << "---> Please insert your text!" << endl;
	while (true) {
		cin >> str;
		if (str == "stop" || str == "STOP") {
			my_text.push_back(str);
		}
	
	}

	//Printing the orginal string inputs
	cout << "Printing the input texts of the  vector:" << endl;
	for (string& luku : my_text)
		cout << luku << endl;
	
	//Printing the content after calling the backwards function
	backwards(my_text);
	cout << "After calling backwards the vector contains:" << endl;
		for (string& luku : my_text)
			cout << luku << endl;
		

	return 0;
}