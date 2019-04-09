#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *start = NULL , *end = NULL;
	node *temp , *ptr , *ptr2;
	char ch;
	int data;
	
	do
	{
		temp = new node;
		temp -> next = NULL;
		cout << "Enter the value in the node :";
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
		
		cout << "Do you want to insert more nodes in the linked list \n Enter with y or Y ";
		cin >> ch;
	}	while (ch == 'y' || ch == 'Y');
	
	temp = start;
	
	while (temp != NULL)
	{
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	cout << "x";
	
	do
	{
		temp = new node;
		temp -> next = NULL; 
		cout << "Enter the value of the element before which you want to insert a node in the linked list\n";
		cin >> data;
		
		cout << "Enter the data \n";
		cin >> temp -> data;
		ptr = start, ptr2 = start;
		
		while(ptr -> data != data)
		{
			ptr2 = ptr;
			ptr = ptr -> next;
		}
		
		ptr2 -> next = temp;
		temp -> next = ptr;
		
		cout << "Do you want to insert more elements in the middle of the linked list\n Enter with y or Y";
		cin >> ch;
		
		ptr = start, ptr2 = start;
	} while (ch == 'y' || ch == 'Y');
	
	temp = start;
	
	while (temp != NULL)
	{
		cout << temp -> data << " -> ";
		temp = temp -> next;
	}
	cout << "x";
}
