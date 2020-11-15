#include <iostream>

using namespace std;

class Node
{
public:
	Node(int val);
	int value;
	Node* next;
};

Node::Node(int val) : value(val), next(nullptr)
{
}

class List
{
public:
	List() {
		this->head = nullptr;
		this->size = 0;
	}

	void push_front(int value)
	{
		Node* new_head = new Node(value);
		new_head->next = head;
		head = new_head;

		size++;
	}

	int pop_front() throw(string)
	{
		if (head == nullptr) throw string("List is empty");

		int old_head_value = head->value;

		Node* old_head = head;
		head = head->next;
		delete old_head;

		size--;

		return old_head_value;
	}

	int getSize() {
		return size;
	}
private:
	int size;
	Node* head;
};

int main()
{
	List list;

	for (int i = 0; i <= 5; i++)
	{
		list.push_front(i);
		cout << "pushed " << i << ", size: " << list.getSize() << endl;
	}

	cout << endl;

	for (int i = 0; i <= 3; i++)
	{
		int value = list.pop_front();
		cout << "popped " << value << ", size: " << list.getSize() << endl;
	}

	int test = 0;
	cin >> test;

	return 0;
}