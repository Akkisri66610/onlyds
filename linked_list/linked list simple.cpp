#include<iostream>
#include<process.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{
	node *start = NULL, *end = NULL;
	node *temp;
	char ch;
	do
	{
		cout << "Do you want to insert data in the node\n Enter with y or Y\n";
		cin >> ch;
		
		if(ch != 'y' || ch != 'Y')
		{
			break;
		}	
			
		temp = new node;
		temp -> next = NULL;
		cout << "Enter the data in the node :" ;
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
		
		cout << "Do you want to insert data in the node\n Enter with y or Y\n";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	
	temp = start;
	
	while (temp != NULL)
	{
		cout << temp -> data << "->" ;
		temp = temp -> next;
	}
	cout << "x";
	return 0;
}
