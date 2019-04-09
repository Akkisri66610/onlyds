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
		cout << "Enter the data in the linked list\n";
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
		cout << "Do you want to enter more data in the linked list\n then enter y or Y\n";
		cin >> ch;
	}while(ch == 'y' || ch == 'Y');
	
	
	temp = start;
	cout << "Printing the data present in the linked list\n";
	while (temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
	
	node *ptr;
	ptr = start;
	start = start -> next;
	delete ptr;
	
	cout << "After deleting the first element in the linked list\n";
	temp = start;
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}
