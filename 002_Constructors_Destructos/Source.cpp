#include <iostream>
using namespace std;

//����������� - �� ����� �����, ���� ����������� ����������� ��� ������� �������
//�������� �����������:
//-����������� ��'����
//-�������� ���'��

//������������ ��������� �������� �� public ������

//����������� ����� ���������������
// ���� �� �� ������� ����� �������� ������������, �� ��� ��������
// �� ��� �������� ����������� �� �������������
// ���� �� ������� ������� �����������, �� ����������� �� ������������� �����������


class point {

private:
    // ���, ����
    int x, y;


  
public:
    //�����������

    point() {
        x = 0;
        y = 0;
    }

    point(int x_value, int y_value) {
        x = x_value;
        y = y_value;
    }




    // �������, ������
    void set() {
        cout << "enter x: ";
        cin >> x;
        cout << "enter y: ";
        cin >> y;
    }
    void set(int x_value, int y_value) {
        x = x_value;
        y = y_value;
    }

    //������ ��������

    //������������
    void set_x(int x_value) {
        x = x_value;
    }
    void set_y(int y_value) {
        y = y_value;
    }
    //���������
    int get_x() {
        return x;
    }

    int get_y() {
        return y;
    }
    void print() {
        cout << "X: " << x << endl << "Y: " << y << endl;
    }

};

class student {
    char* name;
    int age;
public:

    student() {
        name = new char[100];
        age = 0;
    }

    student(const char* name, int age){
        this->name = new char[strlen(name) + 1];
        strcpy_s(this->name, strlen(name) + 1, name);
        this->age = age;
    }

    void set() {
        cout << "Enter name: ";
        gets_s(name, 100);
        cout << "Enter age: ";
        cin >> age;
    }

    void print() {
        cout << "Name: " << name << ", Age: " << age << "\n";
    }

    ~student() {
        delete[] name;
   }
};

int main() {

    /*student s1;
    s1.set();
    s1.print();*/

    student s2("John", 10);
    s2.print();


    /*point p1;
    p1.print();


    point p2(1, 2);

    p2.print();*/













	return 0;
}