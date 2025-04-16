//this is an attempt at a linked list 
#include <iostream>

using namespace std;

struct stud{
	string name;
	int age;
	int mark;
	stud *node;

	stud(string n, int a, int m){
		name = n;
		age = a;
		mark = m;
		node = nullptr;

	}

	void display(){
		cout<< "Name of student is: "<< name<< endl;
		cout<< "Age of student is: "<< age<< endl;
		cout<< "Mark of student is: "<< mark<< endl;

	}

	void nextNode( stud* next){
		node = next;
	}

};

int main(){
	stud Judy("Judy", 18, 64);
	stud John("John", 19, 86);
	Judy.nextNode(&John);

	stud* current = &Judy;

	while(current != nullptr){
		current->display();
		current = current->node;
	}
	
	return 0;
}
