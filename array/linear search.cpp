#include<iostream>
using namespace std;

int main()
{
	int a[10],element,loc,total,i,j,variable,flag=0;
	cout << "Enter the total no. of elements in the array\n";
	cin >> total;
	
	cout << "Enter the elements of the array: ";
	
	for(i = 0; i < total;i++)
	{
		cin >> a[i];
	}
	
	cout << "Enter the element you want to search in the array\n";
	cin >> element;
	
	for(i = 0;i < total;i++)
	{
		if(a[i] == element)
		{
			loc = i + 1;
			cout << "Element found at" << loc << " location";
			flag = 1;
			break;
		}
		
	}
	
	if(flag == 0)
	{
	cout << "Element is not in the array" << endl;
	}
	 // taking flag to solve the problem to print element is not in the array only once
	return 0;
}
