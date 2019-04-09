#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *temp;
	node *start = NULL,*end = NULL;
	char ch;
	
	do
	{
		temp = new node;
		cout << "Enter the element in the linked list\n";
		cin >> temp -> data;
		temp -> next = NULL;
		if(start == NULL)
		{
			start = temp;
			end = temp;
		}
		else
		{
			end -> next = temp;
			end = temp;
		}
		cout << "Enter y or Y if you want to insert more elements in the linked list\n";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	cout << "Enter y if you want to enter the element in the end of the linked list\n";
	cin >> ch;
	
	// use if here for later to y to work
	temp = new node;
	cout << "Enter the data in the linked list\n";
	cin >> temp -> data;
	
	end -> next = temp;
	temp -> next = NULL;
	end = temp;
	
	temp = start;
	cout << "Printing the data in the linked list\n";
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}
