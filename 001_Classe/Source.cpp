#include <iostream>
using namespace std;
#define RECT_SIZE 4
// Об'єктно-орієнтоване програмування(ООП) - це вид прогрумування,
// в якому програма реалізується у вигляді об'єктів, 
// що взаємодіють між собою

// ООП реалізується на основі 3 базовий принципів:
// - Інкапсуляція - це обєднання даних та методів роботи з цими данимо
// в одне єдине ціле - об'єкт. Основна властивість інкапсуляції
// - приховування даних.
// - Наслідування
// - Поліморфізм

// Клас - це спеціальна конструкція, яка викоистовується для групування
// повязаних між собою даних да функції. Дані називаються поля, а функції
// - методами.


//  Функціональне програмування(С)
// 
//struct point {
//    int x, y;
//};
//
//void set_point(point &p) {
//    cout << "enter x: ";
//    cin >> p.x;
//    cout << "enter y: ";
//    cin >> p.y;
//}
//
//void print_point(point p) {
//    cout << "X: " << p.x << endl << "Y: "<< p.y;
//}


//OOП

class point {

private:
    // дані, поля
    int x, y;


    // функції, методи
public:

    void set(){
        cout << "enter x: ";
        cin >> x;
        cout << "enter y: ";
        cin >> y;
    }
    void set(int x_value, int y_value) {
        x = x_value;
        y = y_value;
    }

    //Методи аксесори

    //Модифікатори
    void set_x(int x_value) {
        x = x_value;    
    }
    void set_y(int y_value) {
        y = y_value;
    }
    //Інспекори
    int get_x() {
        return x;
    }

    int get_y() {
        return y;
    }
    void print() {
        cout << "X: " << x << endl << "Y: " << y;
    }

};

class rectangle {
    point points[RECT_SIZE];

public:
    void set() {
        for (int i = 0; i < RECT_SIZE; i++) {
            points[i].set();
        }
    }
    void print() {
        for (int i = 0; i < RECT_SIZE; i++) {
            points[i].print();
        }
    }
};

class person {
    char name[100];
    float height;
public:

    void set(const char* name_value, float height_value) {
        strcpy_s(name, name_value);
        height = height_value;
    }
    void print() {
        cout << "name: " << name << endl << "height: " << height;
    }
};

class student {
private:
    char surname[100];
    int age;

public:
    void set() {
        cout << "enter surname: ";
        gets_s(surname);
        cout << "enter age: ";
        cin >> age;
    }
    void set(char* surname_value, int age_value) {
        strcpy_s(surname, surname_value);
        age = age_value;
    }

    void set_surname(char* surname_value) {
        strcpy_s(surname, surname_value);
    }
    void set_age(int age_value) {
        age = age_value;
    }
    char* get_surname() {
        return surname;
     }
    int get_age() {
        return age;
    }

    void print() {
        cout << "surname: " << surname << endl << "age: " << age;
    }

};

class fraction {
    int numerator;
    int denominator;

public:
    void set(int n, int d) {
        numerator = n;
        denominator = d;
    }
    void set() {
        cout << "enter numerator: ";
        cin >> numerator;
        cout << "enter denominator: ";
        cin >> denominator;
    }
    int get_integer() {
        return numerator / denominator;

    }
    float get_float() {
        return float(numerator) / denominator;
    }
    fraction add(fraction other) {
        int res_numerator =
            this->numerator * other.denominator + this->denominator * other.numerator;

        int res_denominator = this->denominator * other.denominator;

        fraction res;
        res.set(res_numerator, res_denominator);


        return res;
    }

    fraction minus(fraction other) {
        int res_numerator =
            this->numerator * other.denominator - this->denominator * other.numerator;

        int res_denominator = this->denominator * other.denominator;

        fraction res;
        res.set(res_numerator, res_denominator);


        return res;
    }

    fraction mult(fraction other) {
        int res_numerator =
            this->numerator * other.numerator;

        int res_denominator = this->denominator * other.denominator;

        fraction res;
        res.set(res_numerator, res_denominator);


        return res;
    }

    fraction del(fraction other) {
        int res_numerator =
            this->numerator * other.denominator;

        int res_denominator = this->denominator * other.numerator;

        fraction res;
        res.set(res_numerator, res_denominator);


        return res;
    }


    void print() {
        cout << numerator << "/" << denominator << endl;
    }
};


int main() {
    //C

 /*   point p1;
   
    set_point(p1);
    print_point(p1);*/


    //C++

   /* point p1;
    p1.set();
    p1.print();
    
    point p2;
    p2.set();
    p2.print();

    point p3;
    p3.set(100, 200);
    p3.print();


    point p4;
    p4.set(10, 20);
    cout << p4.get_x();*/

   /* person p1;
    p1.set("John", 185);
    p1.print();*/

    /*student s1;
    s1.set();
    s1.print();

    s1.set("AAA", 10);*/


    /*rectangle r;
    r.set();
    r.print();*/


   /* fraction f1;
    f1.set(3, 4);
    f1.print();
    cout<<f1.get_integer()<<endl;
    cout<<f1.get_float();*/


    fraction f1;
    f1.set(2, 3);

    fraction f2;
    f2.set(3, 4);


    fraction f3 = f1.add(f2);
    f3.print();
  
    fraction f4 = f1.minus(f2);
    f4.print();

    fraction f5= f1.mult(f2);
    f5.print();

    fraction f6 = f1.del(f2);
    f6.print();

    return 0;
}