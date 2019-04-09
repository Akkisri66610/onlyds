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
	int item,loc = 0;
	cout << "Enter the item you want to search in the linked list\n";
	cin >> item;
	
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
	
	temp = start;
	while(temp != NULL)
	{
		cout << "Printing the elements of the linked list\n";
		cout << temp -> data << endl;
		temp = temp -> next;
	}
	
	node *ptr;
	ptr = start;
	while(ptr != NULL)
	{
		if(ptr -> data == item)
		{
			cout << "Element is found in the linked list\n";
			loc = loc + 1;
			cout << "The location of element is " << loc << endl;
			break;
		}
		ptr = ptr -> next;
		loc = loc + 1;
	}
}
