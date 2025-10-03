#include <iostream>
using namespace std;
#define SURNAME_SIZE 100
#define NAME_SIZE 100
#define MARKS_SIZE 5


class student {
	char* surname;
	int* marks;
public:
	student() {
		surname = new char[SURNAME_SIZE];
		marks = new int[MARKS_SIZE];
	}

	student(const char* surname, int* marks) {
		this->surname = new char[strlen(surname) + 1];
		strcpy_s(this->surname, strlen(surname) + 1, surname);

		this->marks = new int[MARKS_SIZE];
		for (int i = 0; i < MARKS_SIZE; i++) {
			this->marks[i] = marks[i];
		}
	}
	void set() {
		cout << "Enter surname: ";
		gets_s(surname, SURNAME_SIZE);
		cout << "Enter 5 marks: ";
		for (int i = 0; i < MARKS_SIZE; i++) {
			(cin >> marks[i]).get();
		}
		

	}
	void print() {
		cout << "Surname: " << surname << "\n";
		cout << "Marks: ";
		for (int i = 0; i < MARKS_SIZE; i++) {
			cout << marks[i]<<", ";
		}
		cout << endl;
	}


	~student(){
		delete[] surname;
		delete[] marks;
	}
};

class group {
	char* name;
	student* students;
	int count;

public:
	group(int count) {
		this->count = count;

		this->name = new char[NAME_SIZE];
		
		this->students = new student[count];
	}
	void set() {
		cout << "Enter group name: ";
		gets_s(name, NAME_SIZE);
		for (int i = 0; i < count; i++) {
			this->students[i].set();
		}
	}
	void print() {
		cout << "Group name: " << name << endl;
		for (int i = 0; i < count; i++) {
			this->students[i].print();
		}
	}

	~group() {
		delete[] name;
		delete[] students;
	}


};

int main() {

	/*student s1;
	s1.set();
	s1.print();*/

	group p1(2);
	p1.set();
	p1.print();

	group p2(3);
	p2.set();
	p2.print();

	return 0;
}