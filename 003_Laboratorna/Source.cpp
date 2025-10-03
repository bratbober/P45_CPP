#include <iostream>
using namespace std;
#define SIZE 100

class train {
	char* number;
	char* name;
	int* carriages;
	int count_carriages;

public:
	train() {
		number = new char[SIZE];
		name = new char[SIZE];
		carriages = nullptr;
		count_carriages = 0;
	}
	train(const char* number, const char* name,  int* carrieges,  int count_carriages) {
		this->number = new char[strlen(number) + 1];
		strcpy_s(this->number, strlen(number) + 1, number);

		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);

		this->count_carriages = count_carriages;
		this->carriages = new int[count_carriages];

		for (int i = 0; i < count_carriages; i++) {
			this->carriages[i] = carriages[i];
		}
	}



	void print() {
		cout << "Number: " << number << ", " << "Name: " << name << ", " << "Carriages: " ;
		for (int i = 0; i < count_carriages; i++) {
			cout << this->carriages[i];
		}
	}



};

int main() {
	int* carrieg = new int[5] {1,2,3,4,5};
	train t1("12345", "LVIV-KYIV", carrieg, 5);
	
	t1.print();











	return 0;
}





