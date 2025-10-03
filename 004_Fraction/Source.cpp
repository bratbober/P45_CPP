#include <iostream>
using namespace std;

class fraction {
    int numerator, denominator;
public:

    fraction() {
        numerator = 0;
        denominator = 1;
    }

    fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void set(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void set() {
        cout << "Enter numerator: ";
        cin >> numerator;
        cout << "Enter denominator: ";
        cin >> denominator;
    }

    int get_numerator() const {
        return numerator;
    }

    int get_denominator() const {
        return denominator;
    }


    int get_integer() {
        return numerator / denominator;
    }

    double get_double() {
        return (double)numerator / denominator;
    }

    fraction add(fraction other) {

        int res_numerator =
            this->numerator * other.denominator + this->denominator * other.numerator;

        int res_denominator = this->denominator * other.denominator;

        fraction res;
        res.set(res_numerator, res_denominator);

        return res;
    }

    operator int() {
        return get_integer();
    }
    operator double() {
        return get_double();
    }



    void print() {
        cout << numerator << "/" << denominator << "\n";
    }

};

// Перевантажити оператори як функції:
// +, -, *, /, ==, !=, >, <, >=, <=

fraction operator+(const fraction& first, const fraction& second) {
    int res_numerator =
        first.get_numerator() * second.get_denominator()
        + first.get_denominator() * second.get_numerator();

    int res_denominator = first.get_denominator() * second.get_denominator();

    fraction res(res_numerator, res_denominator);

    return res;
}

ostream& operator <<(ostream& os, const fraction& obj) {
    os << obj.get_numerator() << "/" << obj.get_denominator();
    return os;
}
istream& operator >>(istream& is, fraction& obj) {
    obj.set();

    return is;
}

fraction operator-(const fraction& first, const fraction& second) {
    int res_numerator =
        first.get_numerator() * second.get_denominator()
        - first.get_denominator() * second.get_numerator();

    int res_denominator = first.get_denominator() * second.get_denominator();

    fraction res(res_numerator, res_denominator);

    return res;
}
fraction operator*(const fraction& first, const fraction& second) {
    int res_numerator =
        first.get_numerator() * second.get_numerator();


    int res_denominator = first.get_denominator() * second.get_denominator();

    fraction res(res_numerator, res_denominator);

    return res;
}
fraction operator/(const fraction& first, const fraction& second) {
    int res_numerator =
        first.get_numerator() * second.get_denominator();


    int res_denominator = first.get_denominator() * second.get_numerator();

    fraction res(res_numerator, res_denominator);

    return res;
}


fraction operator+(int number, const fraction& first) {  
    return fraction(number, 1) + first ;
}
fraction operator+(const fraction& first, int number) {  
    return first + fraction(number, 1);
}
fraction operator-(int number, const fraction& first) {  
    return fraction(number, 1) - first;
}
fraction operator-(const fraction& first, int number) {  
    return first - fraction(number, 1);
}
fraction operator*(int number, const fraction& first) {  
    return fraction(number, 1) * first;
}
fraction operator*(const fraction& first, int number) {  
    return first * fraction(number, 1);
}
fraction operator/(int number, const fraction& first) {  
    return fraction(number, 1) / first;
}
fraction operator/(const fraction& first, int number) {  
    return first / fraction(number, 1);
}

int main() {

    fraction f1(2,3);
    //cin >> f1;
    //cout << f1<<endl;
    //cout << (int)f1 << endl << (double)f1;
    cout << f1 + 2<<endl<<2-f1<<endl<<f1*2<<endl<<2/f1;
    


    return 0;
}