
/*Exercise 2A
Using string class member functions
Start by downloading the program xmltemperature_pohja.cpp and xml-file wheather.xml 
from the workspace. The program xmltemperature_pohja.cpp reads the whole xml-file 
into a single string object.
Develop the program further so that it finds and extracts specified items from the xmlstring using start and end tags. Now we find and extract and display first the location 
information and then the temperature information. Location can be found between the 
tags <location> and </location>. The temperature is between the tags <temp_c> and 
</temp_c>.
To make it easy to find whatever information from the, xml-string write a function that 
takes the xml-string and the "inner" text (same for start tag and end tag) of the tags as 
parameters and returns the text from between the start tag and end tags. If either start or 
end tag is not found the function must return "not found". Note that when you search
for the tag you must search for the whole tag (including angle brackets) not just the tag 
name that was given as parameter.
For example, if you wanted to find the location
 location = find_field(page, "location");
and to get the temperature you could call it as follows:
 temperature = find_field(page, "temp_c");*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string find_field(const string& xml, string tag_name);

int main() {
	string page, line, location, temperature;
	ifstream inputFile("weather.xml");

	while (getline(inputFile, line)) {
		page.append(line);
		line.erase();
	}
	// Now page is a string that contains the whole xml page

	// Here you need to write something that finds and 
	// extracts location and temperature from the XML
	// data in the string page and stores them in 
	// the strings location and temperature respectively


	cout << "Location: " << location << endl;
	cout << "Temperature: " << temperature << endl;

}


string find_field(const string& xml, string tag_name)
{
	// construct start and end tags from from the tag name 
	// add angle brackets to both tags and also slash to end tag
	// then search for tags 
	// if both are found then return the substring between the tags

	return "not found"; // return this if tag is not found
}
