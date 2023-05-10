
#include <iostream>
using namespace std;

/*For github testing!!*/

class maths {
private:
    //Variables 
    int a, b, input = 0, result = 0;


public:
    // The constructor which takes two input values!
    maths(int first = 0, int second = 0) {
        a = first;
        b = second;
        cout << "Please insert the first number! " << endl;
        cin >> a;
        cout << "Please insert the second number! " << endl;
        cin >> b;
    };
    //Print function to ask users for the options!
    void print() {
        cout << "Please choose an option!" << endl;
        cout << "<----------------!!!--------------->" << endl;
        cout << "    <------------!!!---------->" << endl;
        cout << "         <-------!!!------>" << endl;
        cout << "1 -> Sum! <-" << endl;
        cout << "2 -> Minus! <-" << endl;
        cout << "3 -> Multiply! <-" << endl;
        cout << "4 -> Devide ! <-" << endl;
        cout << "Please insert your option!" << endl;
    };

    // Void sum function to add the input variables.
    void summa() {
        result = a + b;
        cout << "Result of the Sum!" << endl;
        cout << result;
    };

    //Void subtract function to subtract two input numbers!
    void minus() {

        result = a - b;
        cout << "Result of the Subtraction!" << endl;
        cout << result;
    };

    //Void multiply function to multiply two input numbers!
    void mult() {

        result = a * b;
        cout << "Result of the Multiplication! " << endl;
        cout << result;
    };

    //Void Divide function to devide two input numbers!
    void div() {

        result = a / b;
        cout << "Result of the Division! " << endl;
        cout << result;
    };
    // Void function for users to input their choice of action!
    void action() {
        cin >> input;
        while (input < 1 || input > 4) {
            cout << "Wrong input" << endl;
            cout << "Insert a number between 1 - 4 " << endl;
            cin >> input;
        }
        switch (input) {
        case 1:
            summa();
            break;
        case 2:
            minus();
            break;
        case 3:
            mult();
            break;
        case 4:
            div();
            break;
        default:
            cout << "Error!";
            break;
        }
    };
};
//Main function to run the program!
int main() {

    int one = 0, two = 0;
    maths start(one, two);
    start.print();
    start.action();

    return 0;
}
