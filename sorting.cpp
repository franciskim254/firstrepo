///file sorting by humidity
#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;
struct data{

	string location;
	string timestamp;
	float humidity;
	float temperature;

};

int main(){
	ifstream file ("data.csv");
	string line;
	float temperature;
	float humidity;
	vector<data> DataList;
	

	getline(file, line);
	while(getline(file, line)){
		stringstream ss(line);

		string timestamp,temperatureStr,humidityStr,location;
		getline (ss, timestamp, ',');
		getline (ss, temperatureStr, ',');
		getline (ss, humidityStr, ',');
		getline (ss, location, ',');

		temperature = stof(temperatureStr);
		humidity = stof(humidityStr);

		data entry;
		entry.timestamp = timestamp;
		entry.location = location;
		entry.temperature = temperature;
		entry.humidity = humidity;

		DataList.push_back(entry);

	}
	file.close();

	sort(DataList.begin(), DataList.end(), [](const data&a, const data&b){return a.humidity>b.humidity;});
        cout<< "\nSorted with humidity\n";
        for(const auto&entry: DataList){
    	   cout<< "humidity "<< entry.humidity<< " % | "<< "temperature "<< entry.temperature
    	   << "C | "<< "location was "<< entry.location << "\n";
    	
    }
    return 0;
}
