//doing some temperature averaging
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
	float temperature= 0.00;
	int count = 0;
	float tempsum =0.0;

	getline(file, line);
	while (getline(file, line)){
		stringstream ssl (line);
		string timestamp, temperaturestr, humidity, location;

		getline(ssl, timestamp, ',');
		getline(ssl, temperaturestr, ',');
		getline(ssl, humidity, ',');
		getline(ssl, location, ',');

		cout << "your temperature was: "<< temperaturestr<< "C at "<< timestamp<< "\n";
		temperature = stof(temperaturestr);
		tempsum += temperature;
		count ++;



	}

	if (count>0){
		float average = tempsum/count;
		cout<< "\nAverage temperature is "<< average<< "\n";
	}
	file.close();
	return 0;
}

