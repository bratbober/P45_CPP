#include <iostream>
using namespace std;

//template<class T>
//T sum(T a, T b) {
//	return a + b;
//}


template<class T>
T avarage(T* arr, int size) {
	T count = 0;
	for (int i = 0; i < size; i++) {
		count += arr[i];
	}
	return count / size;
}



int main() {
	setlocale(LC_CTYPE, "ukr");
	srand(time(0));


	/*double res = sum(3.5, 4.9);
	cout << res;*/


	const int size = 5;
	int arr1[] = { 3, 0, 1 , 19, 4 };
	double arr2[] = { 9.2, -4.2, 1.1 , 19.4, 4.3 };

	int avareg = avarage(arr1, size);
	cout << avareg << endl;
	double avar = avarage(arr2, size);
	cout << avar << endl;









	return 0;
}