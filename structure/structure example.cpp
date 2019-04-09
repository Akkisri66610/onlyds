#include<iostream>
using namespace std;

struct akash
{
	char name[20];
	char sex;
	int age;
	
	void GettingInput()
	{
		cout << "Enter your name " ;
		gets(name);cout << endl;
		cout << "Enter your sex it can be m or M for male and f or F for female ";
		cin >> sex;
		cout << "Enter your age ";
		cin >> age;
	}
	
	void DisplayingInput()
	{
		cout << name << endl;
		cout << sex << endl;
		cout << age << endl;
	}
};

int main()
{
	akash object[5]; // array of objects
	for(int i = 0; i < 5;i++)
	{
		cout << "Enter the values for " << i + 1 << "member : ";  // a problem is occurring
		object[i].GettingInput();
		object[i].DisplayingInput();
		fflush(stdin);
	}
}
