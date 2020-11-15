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
	
	int at(int index) {
		int ind = 0;
		Node* node = this->head;
		while (ind != index) {
			node = node->next;
			ind++;
		}

		return node->value;
	}

	Node* atNode(int index) {
		int ind = 0;
		Node* node = this->head;
		while (ind != index) {
			node = node->next;
			ind++;
		}

		return node;
	}

	void insert_at(int index, int value) {
		if (index == 0) push_front(value);
		else if (index == this->size) push_back(value);

		Node* new_node = new Node(value);
		Node * prev_node = atNode(index - 1);
		Node* next_node = prev_node->next;

		prev_node->next = new_node;
		new_node->next = next_node;

		size++;
	}

	void remove_at(int index) {
		if (index == 0) pop_front();
		else if (index == this->size - 1) pop_back();

		Node* remove_node = atNode(index);
		Node* prev_node = atNode(index - 1);
		prev_node->next = prev_node->next->next;
		delete remove_node;

		size--;
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

	int pop_back() {
		if (tail == NULL) throw string("List is empty");

		int last_value = tail->value;

		Node* pre_tail = this->head;
		while (pre_tail->next != NULL && pre_tail->next->next != NULL) {
			pre_tail = pre_tail->next;
		}

		delete tail;
		if (size > 1) {
			pre_tail->next = NULL;
			tail = pre_tail;
			size--;
		}
		else {
			tail = NULL;
			head = NULL;
		}

		return last_value;
	}

	int getSize() {
		return size;
	}
private:
	int size;
	Node* head;
	Node* tail;
};

void printList(List* list)
{
	for (int i = 0; i < list->getSize(); i++)
	{
		cout << "list[" << i << "] == " << list->at(i) << endl;
	}
}

int main()
{
	List list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	printList(&list);
	cout << endl;
	list.remove_at(2);
	printList(&list);
	cout << endl;
	list.insert_at(1, 6);
	printList(&list);

	int test = 0;
	cin >> test;

	return 0;
}