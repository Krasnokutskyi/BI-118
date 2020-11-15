#include <iostream>

using namespace std;

class Node
{
public:
	Node(int val);
	~Node()
	{
		cout << "-Node" << endl;
	}

	int value;
	Node* next;
};

Node::Node(int val) : value(val), next(nullptr)
{
}

class List
{
public:
	List() : head(nullptr) { }

	void push_front(int value)
	{
		Node* new_head = new Node(value);
		new_head->next = head;
		head = new_head;
	}

	int pop_front() throw(string)
	{
		if (head == nullptr) throw string("List is empty");

		int old_head_value = head->value;

		Node* old_head = head;
		head = head->next;
		delete old_head;

		return old_head_value;
	}
private:
	Node* head;
};

int main()
{
	List list;

	list.push_front(1);
	list.push_front(2);
	list.push_front(3);
	list.push_front(4);

	int test = 0;
	cin >> test;

	return 0;
}