//file parsing
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream file("data.csv");
	string line;

	getline(file, line);
	while (getline(file, line)){
		stringstream ssl (line);
		string timestamp, temperature, humidity, location;

		getline(ssl, timestamp, ',');
		getline(ssl, temperature, ',');
		getline(ssl, humidity, ',');
		getline(ssl, location, ',');

		cout << "your temperature was: "<< temperature<< "C at "<< timestamp<< "\n";
		cout << " while your humidity was: "<< humidity << " in "<< location<< "\n";
		cout << "\n";

	}
	file.close();
	return 0;
}
