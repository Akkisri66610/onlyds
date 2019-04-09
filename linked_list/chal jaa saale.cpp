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
	int ch,i,count,position;
	
	do
	{
		if(start == NULL)
		{
			temp = new node;
			cin >> temp -> data;
			start = temp;
			end = temp;
		}
		
		else
		{
			temp = new node;
			cin >> temp -> data;
			end = temp;
		}
		cout << "If you want to enter the element in the linked list enter y or Y ";
		cin >> ch;
		while(ch == 'y' || ch == 'Y');
		
		cout << "Enter at which position you want to insert the element in the linked list " << endl;
		cin >> position;
		
		
		for(i = 0;i < count - 2;i++)
		{
			start = start -> next;
		}
		node *ptr;
		ptr = start ;
		temp = new node;
		cout << "Enter the data you want to insert in the linked list ";
		cin >> temp -> data;
		temp->next = ptr->next;
		ptr = temp;
		
		temp = start;
		while(temp != NULL)
		{
			cout << temp -> data << "->";
			temp = temp->next;
		}
	}
}
