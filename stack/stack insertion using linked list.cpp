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
		temp -> next = NULL;
		cout << "Enter the value in the node : ";
		cin >> temp -> data;
		if(start == NULL)
		{
			start = temp;
			end = temp;
		}
		else
		{
			temp -> next = start;
			start = temp;
		}
		cout << "Do you want to insert more elements in the stack\n";
		cout << "Enter with y or Y\n";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	while(temp  != NULL)
	{
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	cout << "x";
	return 0;
}
