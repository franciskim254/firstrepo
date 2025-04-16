//file handling
#include <iostream>
#include<fstream>
#include <sstream>

using namespace std;

int main(){
	ofstream file ("hello.txt");
	if (file.is_open()){
		file<< "this is the hello world of file handling\n";
		file<< "hey kim\n";
		file.close();
		cout << " Data written to file\n";
       
	}else{
		cout<< "Couldnt create the file";
	}
	return 0;
}