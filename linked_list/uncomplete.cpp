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
	node *ptr1;
	
	do
	{
		temp = new node;
		cout << "Enter the data in the first node of the linked list\n";
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
		cout << "Enter y if you want to enter more data in the linked list\n";
		cin >> ch;
	}	while(ch == 'y' || ch == 'Y');
	
	int item;
	cout << "Enter the item you want to delete in the linked list\n";
	cin >> item;
	
	while(start <= end)
	{
		if(start -> data == item)
		{
			node *ptr;
			ptr = start;
			start = start -> next;
			delete ptr;
		}
		
		else
		{
			node *i;
			i = start;
			for(i;i -> next -> data != item;i = i -> next)
			{
				ptr1 = i -> next;
			}
		}
		start = start -> next;
	}
	
	start -> next // incomplete
}
