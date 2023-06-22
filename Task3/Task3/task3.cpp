/****Excercise A(2p) Simple sorting
Write a program that defines a vector of double.The program asks user to enter numbers
and stores the numbers in the vector.The program stops asking numbers when user enter
a negative number.The negative number is not stored the vector.
When program has finished asking numbers it sorts the numbers.After sorting the
program prints the numbers on separate lines with 3 decimal precision.
Iomanipulators can be used to change formatting of output(and input) streams.See
http ://www.cplusplus.com/reference/iomanip/setprecision/ for an example.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> 
using namespace std;

//Main function of the programm!
int main() {
	double number;
	vector<double>nums;
	int longest_size = 0;

	//Using while loop for user input and also pushing the numbers into the vector!
	cout << "--> Please insert your numbers! " << endl;
	while (true) {
		cin >> number;
		if (number < 0) {
			break;
		}
		nums.push_back(number);
	}
	//Displaying all the numbers which are in the vector using for loop!
	cout << "--> Displaying all the numbers from the vector:" << endl;
	for (auto i = nums.begin(); i < nums.end(); ++i) {
		
		//Sort function
		sort(nums.begin(), nums.end());

		//using setprecision for the output of numbers!
		cout << fixed <<setprecision(3) << *i << endl;
	}

	return 0;


}