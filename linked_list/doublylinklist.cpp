#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next, *prev;
}*start = NULL, *last = NULL;

int main()
{
	node *temp;
	char ch;
	
	do
	{
		temp = new node;
		temp->next = NULL;
		temp->prev = NULL;
		cout<<"\nEnter the element : ";
		cin>>temp->data;
		if(start == NULL)
		{
			start = temp;
			last = temp;
		}
		
		else
		{
			last->next = temp;
			temp->prev = last;
			last = temp;
		}
		cout << "If you want to enter the element in the linked list enter y or Y ";
		cin >> ch;
	}while(ch == 'y' || ch == 'Y');

	temp = start;
	while(temp != NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"X\n\n";
	
	temp = last;
	while(temp != NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->prev;
	}
	cout<<"x";
}
