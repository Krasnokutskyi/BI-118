#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

class Person
{
	public:
		string name;
		int age;
		string lastName;
};

string FullName(Person* person)
{
	return person->name + " " + person->lastName;
}

void print(Person* person)
{
	cout << FullName(person) << " is " << person->age << " years old" << endl;
}


int main()
{
	Person person;
	person.name = "Harry";
	person.age = 20;
	person.lastName = "Potter";
	cout << "Meet " << person.name << "\n";
	print(&person); 
	printf("\n");
	
	return 0;
}