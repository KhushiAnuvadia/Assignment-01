#include <iostream>
#include <string>
using namespace std;

class Student
{
	public:
	string name;
	int rollnumber;
	float marks;

void accept()
{
	cout << "Enter Name: ";
        cin>>name; 

	cout << "Enter Roll Number: ";
	cin>>rollnumber;

	cout << "Enter Marks: ";
	cin>>marks;
}

void calculateResult()
{
	if (marks>=40)
	{
		cout<<"Your Result is: PASS";
	}
	else
	{
		cout<<"Your Result is: FAIL";
	}
}

void display()
{
	cout<<"\n---Student Details---" << endl;
	cout<<"Name: " <<name << "\n";
	cout<<"ROll Number: " <<rollnumber << "\n";
	cout<<"Marks: " <<marks << "\n";

	calculateResult();
}

};

int main()
{
	Student s;

	s.accept();
	s.display();
	
return 0;
}
