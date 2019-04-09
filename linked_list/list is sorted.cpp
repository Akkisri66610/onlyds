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
	int loc = 0;
	
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
	
	int item;
	cout << "Enter the data you want to search in the linked list\n";
	cin >> item;
	
	node *ptr;
	ptr = start;
	while (ptr != NULL)
	{
		if(ptr -> data == item)
		{
			cout << "Element is found in the linked list\n";
			loc = loc + 1;
			cout << "Element is found at " << loc << " location\n";
			break;
		}
		
		else if(ptr -> data < item)
		{
			ptr = ptr -> next;
			loc = loc + 1;
		}
		
		else
		{
			cout << "Item is not in the list\n";
			break;
		}
	}
}
