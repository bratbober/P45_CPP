#include <iostream>
#include<string>
#include <fstream> 
#include <stdexcept>
using namespace std;


class file_utils {
public:
	/**
	 * @brief ����� ���� ���� ����� � �����.
	 *
	 * @param file_path ���� �� �����.
	 * @return std::string ���� �����.
	 * @throws std::runtime_error ���� ���� �� ������� �������.
	 */
	static string read_file_to_string(const string& file_path) {
		ifstream file_stream(file_path);

		if (!file_stream.is_open()) {
			throw runtime_error("�� ������� ������� ���� ��� �������: " + file_path);
		}

		return string((istreambuf_iterator<char>(file_stream)),
			istreambuf_iterator<char>());
	}

	/**
	 * @brief ������ ����� � ����.
	 *
	 * @param file_path ���� �� �����. ���� ���� ����, ���� ���� ������������.
	 * @param content �����, ���� ������� ��������.
	 * @throws std::runtime_error ���� ���� �� ������� ������� ��� ������.
	 */
	static void write_string_to_file(const string& file_path, const string& content) {
		ofstream file_stream(file_path);

		if (!file_stream.is_open()) {
			throw runtime_error("�� ������� ������� ���� ��� ������: " + file_path);
		}

		file_stream << content;
	}
};


int menu() {
	cout << "\n--------------Menu--------------\n";
	cout << "0  - Exit\n";
	cout << "1  - Show text\n";
	cout << "2  - Amout of symb\n";
	cout << "3  - Search world\n";
	cout << "4  - \n";
	cout << "5  - \n";
	cout << "6  - \n";
	cout << "7  - \n";


	int choice;

	cout << "Enter your choice: ";
	(cin >> choice).get();
	return choice;
}


int main(){

	/*string s1;
	string s2 = "hello";
	string s3(s2);
	string s4(10,'-');

	cout << s4;
*/


	//string str1 = "hello";
	//string str2 = "world";

	//str1 += str2;
	//cout << str1 << endl;

	//cout << str2;


	/*string str1 = "hello";
	string str2;
	str2 = str1;

	cout << str1 << endl;
	cout << str2 << endl;*/



	/*string str = "hello world";

	cout << str[4];
	str[4] = 'a';

	cout << str;*/


	/*string str1 = "hello";
	string str2 = "hello";*/
	/*if (str1 == str2) {
		cout << "equals";
	}
	else {
		cout << "Not equals";
	}*/


	/*if (str1 > str2) {
		cout << "First is bigger";
	}
	else {
		cout << "Second is bigger";
	}*/




	// insert

	/*string str = "hello world";

	str.insert(6, "all ");
	cout << str;*/


	// erase

	/*string str = "hello world";

	str.erase(2, 3);
	cout << str;*/



	//replace

	/*string str = "hello world";
	str.replace(6, 5, "all");
	cout << str;*/



	/*string str = "hello world";

	cout<<str.length();*/


	// find

	/*string str = "hello all world all hello all hi";

	int pos = str.find("all",10);

	cout << pos;*/



	/*string str = "hello all world all hello all hi";

	string search = "all";
	int pos = str.find(search);
	if (pos == -1) {
		cout << "not found";
	}
	else {
		while (pos != -1) {
			cout << pos << " ";
			str.erase(pos, search.length());
			pos = str.find(search, pos + 1);	
		}
		
	}

	cout << str;*/


	/*string str = "hello all world";
	string res = str.substr(6, 3);
	cout << res;*/
	


//string str = "a";
//if (str.empty()) {
//	cout << "String is empty";
//}


//string str;
////cin >> str;
//getline(cin, str);
//cout << str;


//string str = " hallo im zibert zzz hi z";
//string search = "z";
//int pos = str.find(search);
//if (pos == -1) {
//	cout << "not found";
//}
//else {
//	while (pos != -1) {
//		cout << pos << " ";
//		str.erase(pos, search.length());
//		pos = str.find(search, pos);
//	}
//
//}
//str.insert(str.length() / 2, "ABC");
//
//cout << str;



string file_path = "data.txt";
string text = file_utils::read_file_to_string(file_path);
cout << text;

file_utils::write_string_to_file(file_path, "hello");



int choice;
int res,pos;
do {
	choice = menu();

	switch (choice)
	{
	case 1:
		cout << text;
		break;
	case 2:
		res = text.length();
		cout << res;
		break;
	case 3:
		cout << "enter word: ";
		cin >> text;
		cout << text;
		pos = text.find(text);
		text.erase(pos);
		cout << text;
		break;
	default:
		break;
	}
} while (true);

	return 0;
}