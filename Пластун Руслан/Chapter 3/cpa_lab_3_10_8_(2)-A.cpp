#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Collection {
	int elno;
	int* elements;
};

void AddToCollection(Collection& col, int element)
{
	int* prev_elements = col.elements;

	col.elno++;
	col.elements = new int[col.elno];

	if (prev_elements != NULL) {
		for (int i = 0; i < col.elno - 1; i++)
		{
			col.elements[i] = prev_elements[i];
		}
	}

	col.elements[col.elno - 1] = element;
}

void PrintCollection(Collection col) {
	cout << "[ ";
	for (int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

int main(void) {

	while (true)
	{
		Collection collection = { 0, NULL };
		int elems;

		cout << "How many elements? ";
		cin >> elems;

		srand(time(NULL));

		for (int i = 0; i < elems; i++)
			AddToCollection(collection, rand() % 100 + 1);

		PrintCollection(collection);

		delete[] collection.elements;
	}

	return 0;
}