#include <iostream>
using namespace std;

#define NAME_SIZE 100


class stud {
    char* surname;

public:

    stud() {
        surname = new char[NAME_SIZE];

    }

    stud(const char* surname) {

        this->surname = new char[strlen(surname) + 1];
        strcpy_s(this->surname, strlen(surname) + 1, surname);



    }

    // Конструктор копіювання
    stud(const stud& other) {

        this->surname = new char[strlen(other.surname) + 1];
        strcpy_s(this->surname, strlen(other.surname) + 1, other.surname);

    }

    void set() {

        cout << "enter surname: ";
        gets_s(surname, NAME_SIZE);


    }

    void print() {
        cout << "surname: " << surname << endl;

    }

    ~stud() {
        delete[] surname;
    }

};

// Конструктор копіюванн викликається в трьох випадках:
// - Ініціалізаія одного об'єкта іншим
// - Передача в якості параметра ою'єкта в функію або метод значенню
// - Повернення об'єкта з функції або метода по значенню
// 
// Якщо ми виділяємо динамічну пам'ять і потім в деструкторі її 
// звільняємо, то ми маємо описати свій конструктор копіювання

void func1(stud s) {
    
}

stud func2() {
    stud s("Jack");
    return s;
}


int main() {
  
   /* stud s1("John");
    s1.print();*/

    //stud s2 = s1; // 1
    //s2.print();
    
    /*func1(s1);*/ //2

    stud s2 = func2(); //3












    return 0;
}