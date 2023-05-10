/*
Task 1
Excercise 1 (Basic input and output, arrays and pointers 4p)
Write a program that first asks from the user how many numbers he needs. After that the
program allocates memory space to store those numbers (integer array). Next the program
fills the array with random numbers between 0 - 99, and the program displays all numbers
from the array. After that the program calculates the mean of the generated number
calling a separate function, int mean(int *array, int n). Finally the program must
free the memory space it allocated.
There is rand() function for generating random numbers. Limiting the range to [0,99] is
done with rand() % 100. In order to use rand() function you must include cstdlib header.
*/
#include <iostream>
#include <array>
#include <cstdlib>
#include <time.h>
using namespace std;
//Function to calculate the mean of generated numbers;
int mean(int* array, int n);

//Main function
int main() {

	int* numbers;
	int num = 0, i;

	//Asking user input
	cout << "How many numbers do you need ?" << endl;
	cin >> num;
	numbers = new int[num];

	//Using srand to randomize the number produced by rand
	srand(time(NULL));

	//For loop to go through array and generate random numbers
	cout << "The generated numbers are: " << endl;
	for (i = 0; i < num; i++) {
		numbers[i] = rand() % 100;
		cout << numbers[i] << endl;
	}
	cout << "The mean of generated numbers is: " << mean(numbers, num) << endl;
	
	//free the memory space
	delete[]numbers;
	return 0;
}


//Function to calculate the mean of generated numbers!
int mean(int* array, int n) {
	int average = 0, sum = 0, i;

	//for loop to calculate the sum and average of the array
	for (i = 0; i < n; i++) {
		sum = sum + array[i];
		average = sum / n;
	}
	return average;
}




