#include<iostream>
using namespace std;

int main()
{
	int n,top,item,i = 0;
	int b[10];
	char ch;
	cout << "Enter the number of elements you want in the stack\n";
	cin >> n;
	
	int a[n];
	top = NULL;
	
	cout << "Do you want to insert an element in the stack if you want to insert an element enter y or Y\n";
	cin >> ch;
	cout << "Enter the value of the element" << endl;
	cin >> b[0];
	top = 0;
	a[top] = b[0];
	do{ 

			top = top + 1;
			i = i + 1;
			cout << "Enter the value of the element\n";
			cin >> b[i];
			a[top] = b[i];
		cout << "Do you want to insert more elements then enter y or Y\n";
		cin >> ch;
		}
			while(ch == 'y' || ch == 'Y');
		
		cout << "Printing the elements of the stack\n";
		for(int i = 0; i <= top;i++)
		{
			cout << a[i] << endl;
		}
		return 0;
}
