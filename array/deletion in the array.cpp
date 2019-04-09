#include<iostream>
using namespace std;

int main()
{
	int a[10],total,position,i,j;
	cout << "Enter the no. of elements in the array" << endl;
	cin >> total;
	cout << "Enter from which index you want to delete an element from the array" << endl;
	cin >> position;
	
	for(i = 0;i < total;i++)
	{
		cin >> a[i];
	}
	
	for(i = position - 1;i < total - 1;i++)
	{
		a[i] = a[i + 1];
	}
	
	total = total - 1;
	
	for(i = 0;i < total;i++)
	{
		cout << a[i] << endl;
	}
	
}
