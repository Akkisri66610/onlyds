#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};

int main()
{
	node * start = NULL , *end = NULL;
	node *temp;
	char ch;
	
	do
	{
		temp = new node;
		temp -> next = NULL;
		temp -> prev = NULL;
		
		cout << "Enter the value of the node \n";
		cin >> temp -> data;
		
		if(start == NULL)
		{
			start = temp;
			end = temp;
		}
		
		else
		{
			end -> next = temp;
			temp -> prev = end;
			end = temp;
		}
		
		cout << "Do you want to insert more elements in the doubly linked list\n Enter with y or Y";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	temp = start;
	
	while (temp != NULL)
	{
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	cout << "x";
}
