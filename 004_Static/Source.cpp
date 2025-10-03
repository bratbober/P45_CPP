#include <iostream>
#include<cmath>
using namespace std;

// Статичні поля - це поля, які використовуються спільно всіма об'єктами класу.
// Кажуть, що вони належать не конкретному об'єкту, а класу вцілому




class point {

private:
    // дані, поля
    int x, y;

    // функції, методи
public:
    
    static int count;
    static int liveObjects;

    point() {
        x = y = 0;
        count++;
        liveObjects++;
    }

    point(int x, int y) {
        this->x = x;
        this->y = y;
        count++;
        liveObjects++;
    }


    void set() {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }

    void set(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Методи аксесори

    // Модифікатори
    void set_x(int x_value) {
        x = x_value;
    }

    void set_y(int y_value) {
        y = y_value;
    }

    // Інспектори
    int get_x() {
        return x;
    }

    int get_y() {
        return y;
    }


    void print() {
        cout << "X: " << x << ", Y:" << y << "\n";
    }

    ~point() {
        liveObjects--;
    }
};

class employee {
    char* surname;
    int id;
    static int info;


public:



    employee(const char* surname) {
        this->surname = new char[strlen(surname) + 1];
        strcpy_s(this->surname, strlen(surname) + 1, surname);
        id = info++;
    }

    static int get_info(){  
        return info;
    }

    void print() {
        cout << "Surname: " << surname << "ID: "<< id << endl;
       
    }

};

int point::count = 0;
int point::liveObjects = 0;

int employee::info = 1;


class my_math {

public:
    static const float PI;

    static int sum(int a, int b) {
        return a + b;
    }
    static int sub(int a, int b) {
        return a - b;
    }
    static int mul(int a, int b) {
        return a * b;
    }
    static int div(int a, int b) {
        return a / b;
    }
    static int square(int a) {
        return a*a;
    }
};

const float my_math::PI = 3.14;

class s {


public:
    static int count;

    static int triangle(int a, int h) {
        count++;
        return 0.5 * a * h;
    }
    static float triangle(float a, float b, float c) {
        count++;
        float p = (a + b + c) / 2;

        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    static int rectangle(int a, int b) {
        count++;
        return a * b;
    }
    static int square(int a) {
        count++;
        return a * a;
    }
    static int diamond(int d1, int d2) {
        count++;
        return 0.5 * d1 * d2;
    }
};
int s::count = 0;

int main() {

    /*cout<<my_math::square(9)<<endl;
    cout << my_math::PI;*/

    /*point p1(3,4);
    point p2(1,0);
    point p3(-1,9);

    {
        point p4(1,2);
    }


    cout << point::count<<endl;
    cout << point::liveObjects;
    */

    /*employee e1("John");
    employee e2("Max");
    employee e3("Niko");
    e1.print();
    e2.print();
    e3.print();*/


    cout << s::triangle(10, 5)<<endl;
    cout << s::triangle(10,5,6)<<endl;
    cout << s::rectangle(3,5)<<endl;
    cout << s::square(3)<<endl;
    cout << s::diamond(3, 7)<<endl<<endl;

    cout<<s::count;

    return 0;
}