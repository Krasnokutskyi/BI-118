#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;

	int getAge(void) {
		return age;
	}
};

void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << endl;
}

int main()
{
	while (true)
	{
		Person person;

		person.name = "Harry";
		person.age = 23;

		cout << "Meet " << person.getAge() << endl;

		print(&person);

		int test;
		cin >> test;
	}

	return 0;
}