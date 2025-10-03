#include <iostream>
#include<cmath>
using namespace std;


template<class T>
class s {


public:
    static int count;

    static T triangle(T a, T h) {
        count++;
        return 0.5 * a * h;
    }
    static T triangle(T a, T b, T c) {
        count++;
        T p = (a + b + c) / 2;

        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    static T rectangle(T a, T b) {
        count++;
        return a * b;
    }
    static T square(T a) {
        count++;
        return a * a;
    }
    static T diamond(T d1, T d2) {
        count++;
        return 0.5 * d1 * d2;
    }
};
template<class T>
int s<T>::count = 0;


int main() {




    cout << s<double>::triangle(10.6, 5) << endl;
    cout << s<double>::triangle(10, 5.8, 6) << endl;
    cout << s<double>::rectangle(3.1, 5) << endl;
    cout << s<double>::square(3) << endl;
    cout << s<double>::diamond(3, 7.9) << endl << endl;

    cout << s<double>::count;






    return 0;
}


