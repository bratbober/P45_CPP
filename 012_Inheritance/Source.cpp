#include<iostream>
#include<string>
using namespace std;
#define SIZE 10


// Наслідування - це механізм, при якому об'єкти одного класу
// отримують властивості об'єкта іншого класу,
// і добавляються властивості, які характерні тільки йому.

// Наслідування - це розширення одного класу іншим класом.


class person {
protected:
	string name;
	string surname;
	int age;
public:
	
	person() {
		this->name = "No set name";
		this->surname = "No set surname";
		this->age = 0;
	}


	person(string name, string surname, int age) {
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	void set_name(string name) {
		this->name = name;
	}
	string get_name() const {
		return name;
	}

	void set_surname(string surname) {
		this->surname = surname;
	}

	string get_surname() const {
		return surname;
	}

	void set_age(int age) {
		this->age = age;
	}

	int get_age() const {
		return age;
	}


	void eat() {
		cout << "Eat!";
	}






	void print() const {
		cout << "Name: " << name << "\n";
		cout << "Surname: " << surname << "\n";
		cout << "Age: " << age << "\n";
	}
};


class employee : public person {
	int salary;
public:
	employee() : person() {
		salary = 0;
	}

	employee(string name, string surname, int age, int salary)
		: person(name, surname, age) {
		this->salary = salary;
	}

	void set_salary(int salary) {
		this->salary = salary;
	}

	int get_salary() const {
		return salary;
	}

	void print() const {
		person::print();
		cout << "Salary: " << salary<<endl;
	}
};


class student : public person {
	string class_name;
	int marks[SIZE];
public:
	student() : person() {
		class_name = "No set class_name";

	}

	student(string name, string surname, int age, string class_name,int marks[SIZE])
		: person(name, surname, age) {
		this->class_name = class_name;
		for (int i = 0; i < SIZE; i++) {
			this->marks[i] = marks[i];
		}
	}

	double avarage() {
		double sum = 0;
		for (int i = 0; i < SIZE; i++) {
			sum += marks[i];
		}
		return sum/SIZE;
	}

	void set_class_name(string class_name) {
		this->class_name = class_name;
	}
	string get_class_name() const {
		return class_name;
	}

	void print() const {
		person::print();
		cout << "Class_name: " << class_name<<endl;

	}
	
};

class poet : public person {
	string book; 
public:
	poet() : person(){
		book = "No set book";
	}

	poet(string name, string surname, int age, string book)
		: person(name, surname, age) {
		this->book = book;
	}

	void set_book(string book) {
		this->book = book;
	}
	string get_book() const {
		return book;
	}

	void print() const {
		person::print();
		cout << "Book: " << book;

	}
};


class postman : public employee{
	string department;

public:
	postman() : employee() {
		department = "No set department";
	}

	postman(string name, string surname, int age, int salary, string department) 
		: employee(name,surname,age,salary) {
		this->department = department;
	}

	void set_department(string department) {
		this->department = department;
	}
	string get_department() const {
		return department;
	}

	void print() const {
		employee::print();
		cout << "Department: " << department<<endl;
	}
};

class aspirant : public student {
	string diploma_titles;
	int diploma_mark;
public:

	aspirant() : student(){
		diploma_titles = "No set diploma_titles";
		diploma_mark = 0;
	}

	aspirant(string name, string surname, int age, string class_name,int marks[SIZE], string diploma_titles, int diploma_mark)
		: student(name, surname, age, class_name,marks) {
		this->diploma_titles = diploma_titles;
		this->diploma_mark = diploma_mark;
	}

	bool passed() {
		if (avarage() + diploma_mark >= 18) {
			cout << "You have diploma ";
			return true;
		}
		return false;
	}

	void print() const{
		student::print();
		cout << "Diploma_titles: " << diploma_titles << endl << "Diploma_mark: " << diploma_mark << endl;
	}
};

int main() {
	/*employee e;
	e.print();

	cout << endl;

	employee e1("john", "show", 30,1000);
	e1.print();

	cout << endl;
	

	student s("jack", "black", 20, "P45");
	s.print();*/



	/*postman p;
	p.print();

	cout << endl;

	postman p1("john", "show", 30, 1000, "33a");
	p1.print();*/


	int marks[SIZE] = { 10,11,9,12,10,11,12,12,10,12 };

	aspirant a("john","black",18,"P45",marks,"math_class", 10);
	a.print();
	cout << a.passed();












	return 0;
}