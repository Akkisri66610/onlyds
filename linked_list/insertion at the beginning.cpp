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
		cout << "Enter the data in the node\n";
		cin >> temp -> data;
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
		cout << "If you want to enter more elements in the linked list enter y or Y\n ";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	cout << " Enter y or Y if you want to insert an element in the beginning of the linked list\n";
	cin >> ch;
	
	temp = new node;
	cout << "Enter the data in the linked list\n";
	cin >> temp -> data;
	temp -> next = start;
	start = temp;
	
	temp = start;
	cout << "Printing the elements of the linked list\n";
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
	
}
