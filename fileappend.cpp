//file input handling
#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream file ("hello.txt", ios:: app);

	if (file.is_open()){
		file << "officially appended \n";
		file << "we doing good so far";
		file.close();
		cout<< " file has been appended";

	}else {
		cout<< "error appending the file";
	}
	return 0;
}