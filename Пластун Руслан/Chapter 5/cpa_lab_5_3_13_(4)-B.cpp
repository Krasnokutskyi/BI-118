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

		if (size == 0)
			tail = new_head;

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

	void push_back(int value) {
		Node* node = new Node(value);

		if (size != 0)
			tail->next = node;
		else
			head = node;

		tail = node;
		size++;
	}

	int getSize() {
		return size;
	}
private:
	int size;
	Node* head;
	Node* tail;
};

int main()
{
	List list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	int value = 0;
	while (true)
	{
		try
		{
			value = list.pop_front();
			cout << value << endl;
		}
		catch (string& msg)
		{
			cout << msg << endl;
			break;
		}
	}

	int test = 0;
	cin >> test;

	return 0;
}
