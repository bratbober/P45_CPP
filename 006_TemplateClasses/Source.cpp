#include <iostream>
using namespace std;


//Шаблонні класи

//template<class T>
//class my_class {
//    T a;
//
//public:
//    my_class() { a = 0; }
//    my_class(T a) { this->a = a; }
//    void set_a(T a) { this->a = a; }
//    T get_a() const { return a; }
//    void print() const { cout << a << endl; }
//};

template<class T>
class my_class {
    T x;
    T y;
    T z;

public:
    my_class() {
    x = 0;
    y = 0;
    z = 0;
    }
    my_class(T x, T y, T z) {
        this->x = x; 
        this->y = y; 
        this->z = z; 
    }

    template<class T>
    friend double dot(my_class<T> a, my_class<T> b);

    void print() const { cout << x << endl << y << endl << z << endl; }
};

template<class T>
double dot(my_class<T> a, my_class<T> b) {
    return sqrt(pow(b.x-a.x,2) + pow(b.y - a.y,2) + pow(b.z - a.z,2));
}

int main() {

   /* my_class<int> obj1(100);
    obj1.print();

    my_class<double> obj2(123.9);
    obj2.print();
 

    my_class<char> obj3('a');
    obj3.print();*/



    my_class<int> obj1(1,5,8);
    my_class<int> obj2(3, 8, 1);
    cout<<dot(obj1, obj2);
    


    return 0;
}