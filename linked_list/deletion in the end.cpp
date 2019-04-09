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
		cout << "Enter the data you want to enter in the linked list\n";
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
		cout << "Do you want to enter more data in the linked list then enter y or Y\n";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	node *ptr1;
	ptr1 = start;
	
	while(start -> next -> next != NULL )
	{
		start = start -> next;
	}
	
	node *ptr;
	ptr = start -> next;
	start->next = NULL;
	delete ptr;
	
	start = ptr1;
	temp = start;
	
	cout << "After deleting the element at the end in the linked list\n";
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}
