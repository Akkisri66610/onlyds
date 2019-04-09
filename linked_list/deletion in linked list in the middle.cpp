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
	int position;
	
	do
	{
		temp = new node;
		cout << "Enter the data you want to enter in the first node\n";
		cin >> temp -> data;
		temp -> next = NULL;
		
		if (start == NULL)
		{
			start = temp;
			end = temp;
		}
		
		else
		{
			end -> next = temp;
			end = temp;
		}
		cout << "Do you want to enter more data in the linked list enter with y or Y\n";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	temp = start;
	cout << "Printing the elements in the linked list \n";
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
	
	cout << "Enter the position of element you want to delete\n";
	cin >> position;
	
	node *ptr1;
	ptr1 = start;
	
	for(int i = 1;i < position - 1;i++)
	{
		start = start -> next;
	}
	
	node *ptr;
	ptr = start -> next;
	start -> next = ptr -> next;
	delete ptr;
	
	start = ptr1;
	temp = start;
	
	cout << "After deleting the element at the certain position the remaining nodes present in teh linked list\n";
	while(temp != NULL)
	{
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}
