//file input handling 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream file ("hello.txt");
	string line;

	if(file.is_open()){
		while(getline(file , line)){
			cout<< line << endl;
		}
	}else {
		cout<< " couldnt open file";
	}
	return 0;
}

