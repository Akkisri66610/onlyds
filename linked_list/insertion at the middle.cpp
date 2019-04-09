#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}*start = NULL, *end = NULL; 

void print()
{
	node *temp = start;
	while(temp != NULL)
	{
		cout << temp -> data << "->";
		temp = temp->next;
	}
	cout<<"X";
}
int main()
{
	node *temp;
	int i,count,position;
	char ch;
	
	do
	{
		temp = new node;
		temp->next = NULL;
		cout<<"\nEnter the element : ";
		cin>>temp->data;
		if(start == NULL)
		{
			start = temp;
			end = temp;
		}
		
		else
		{
			end->next = temp;
			end = temp;
		}
		cout << "If you want to enter the element in the linked list enter y or Y ";
		cin >> ch;
	}while(ch == 'y' || ch == 'Y');
	
	print();	
	
	cout<<"\nDo you want to insert an element : ";
	cin>>ch;
	node *ptr;
	if(ch == 'y')
	{
		do
		{
			cout<<"\n Enter the position : ";
			cin>>position;
			temp = new node;
			temp->next = NULL;
			cout<<"\nEnter the data : ";
			cin>>temp->data;
			if (position == 1)
			{
				temp->next = start;
				start = temp;
			}
			else
			{
				ptr = start;
				while(ptr->next != NULL)
				{
					position--;
					if (position == 1)
					{
						break;
					}
					ptr = ptr->next;
				}
				if (ptr == NULL)
				{
					cout<<"\nWrong Position, Do you want to insert the element at the end : ";
					cin>>ch;
					if (ch == 'y')
					{
						ptr->next = temp;
						ptr = temp;
					} 
				}
				else
				{
					temp->next = ptr->next;
					ptr->next = temp;
				}
			}
			print();
			cout<<"\nDo you want to insert another element : ";
			cin>>ch;
		}while(ch == 'y');
	}
}
