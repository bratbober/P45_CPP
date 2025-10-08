#include<iostream>
#include<string>
using namespace std;

// Бінарне дерево - це ДСД, яка складається із вузлів,
// кожен з яких крім даних містить посилання на декілька інших вузлів
// а саме:
// - посилання на лівого нащадка
// - посилання на правого нащадка
// - посилання на предка

// Алгоритм побудови бінарного дерева:
// Перший елемент вставляється в корінь дерева.
// Якщо наступний елемент більший за попередній,
// то він вставляється в праву гілку,
// якщо менший, то в ліву




class bus {
	int number;
	string name;
	string surname;
	int numb_marsh;
	int place;

public:
	bus() {
		number, numb_marsh, place = 0;
		name, surname = nullptr;
	}
	bus(int number,
		string name,
		string surname,
		int numb_marsh,
		int place) {

		this->number = number;
		this->name = name;
		this->surname = surname;
		this->numb_marsh = numb_marsh;
		this->place = place;
	}
	int get_number() const {
		return number;
	}

};

struct element {
	/*int key;*/
	bus data;
	element* left, * right, * parent;

public:

	element() {
		left = right = parent = nullptr;
	}
};





class tree {
	element* root;
	int count;

public:

	tree() {
		root = nullptr;
		count = 0;
	}

	void insert(bus data) {
		element* node = new element;
		

		element* ptr = nullptr, * tmp = root;

		while (tmp) {
			ptr = tmp;
			if (node->data.get_number() < tmp->data.get_number())
				tmp = tmp->left;
			else
				tmp = tmp->right;
		}

		if (ptr == nullptr)
			root = node;
		else if (node->data.get_number() < ptr->data.get_number())
			ptr->left = node;
		else
			ptr->right = node;


		count++;

	}

	void print(element* node) const {
		if (node) {
			print(node->left);
			cout << node->data.get_number() << " ";
			print(node->right);
		}
	}

	element* get_root() const {
		return root;
	}


	element* min(element* node) const {

		if (node) {
			while (node->left)
				node = node->left;

		}

		return node;
	}

	element* max(element* node) const {

		if (node) {
			while (node->right)
				node = node->right;

		}

		return node;
	}

	element* search(element* node, int key) {

		while (node && node->data.get_number() != key) {
			if (key < node->data.get_number()) node = node->left;
			else node = node->right;
		}
		return node;
	}

};


int main() {

	tree t;

	t.insert(bus(111, "Oleh", "Vinnik", 46, 100));
	t.insert(bus(111, "Oleh", "Vinnik", 46, 100));
	t.insert(bus(111, "Oleh", "Vinnik", 46, 100));
	t.insert(bus(111, "Oleh", "Vinnik", 46, 100));
	


	t.print(t.get_root());

	element* min = t.min(t.get_root());
	if (min)
		cout << endl << min->data.get_number();

	element* max = t.max(t.get_root());
	if (max)
		cout << endl << max->data.get_number();

	element* result = t.search(t.get_root(), 102);

	if (result)
		cout << "\n" << result->data.get_number();
	else
		cout << "\nNot found";


	return 0;
}