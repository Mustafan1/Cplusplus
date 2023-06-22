/*Excercise A (4 p) Implement a class
We need to write an application, which reads two times (times are represented by two 
integers: hours and minutes). Then the program finds out which time is later. After that it 
calculates the time difference between these times. Finally, the program displays the 
smaller (earlier) time and the time difference (duration) in the format
starting time was 11:22
duration was 1:04
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
# include <iomanip>
using namespace std;


//Time class  
class Time {
private:
    //Hour and input variables
    int hours, minutes;
public:
    //Read function to read time (minutes and hours) from the keyboard.
    void read(const char luku[13]) {
        cout << "Please insert numbers! Hours between(0-23) and minutes (1-59)" << endl;
        cout << "--------------->" << endl;
        cout << "--------------->" << endl;
        cout << "--------------->" << endl;
        cout << luku << endl;
        cout << "Please insert the hour 0 - 23!" << endl;
        //Using while loop to validate the user input
        while (1) {
            cin >> hours;
            if (hours >= 0 && hours < 24)
                break;
            std::cout << "Wrong input! " << endl << "Please insert numbers between (1-23)" << endl;
        }
        cout << "Please insert the minutes 1 - 59!" << endl;
        while (1) {
            cin >> minutes;
            if (minutes >= 0 && minutes < 60)
                break;
            std::cout << "Wrong input!" << endl << "Please insert numbers between (1-59)" << endl;
        }
    }
    //Subtract function to calculate time difference between two times.
    Time subtract(Time& t2) {
        Time  duration;
        int dmin, t1min, t2min;
        t1min = hours * 60 + minutes; // target object
        t2min = t2.hours * 60 + t2.minutes;// parameter object

        dmin = t2min - t1min;

        duration.hours = dmin / 60; // local object
        duration.minutes = dmin % 60; // local object
        return  duration;
    }
    //Lessthan function to calculate time difference between two times.
    bool lessThan(const Time& t2) {
        int t1min, t2min;
        t1min = hours * 60 + minutes;
        t2min = t2.hours * 60 + t2.minutes;
        if (t1min > t2min) {
            return true;
        }
        else {
            return false;
        }
    }
    //Display function to display time in the format hh:mm.
    void display() {
        cout << setiosflags(ios::right);
        cout << setfill('0') << setw(2) << hours;
        cout << ":" << setfill('0') << setw(2) << minutes << endl;
    }
};
//The main function of the program.
int main() {
    Time time1, time2, duration;

    time1.read("Enter time 1");
    time2.read("Enter time 2");
    if (time1.lessThan(time2)) {
        duration = time2.subtract(time1);
        cout << "Starting time was ";
        time1.display();
    }
    else {
        duration = time1.subtract(time2);
        cout << "Starting time was ";
        time2.display();
    }
    cout << "Duration was ";
    duration.display();

    return 0;
}