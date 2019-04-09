#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int element,position,total,i,j;
	cout << "Enter the total no. of element in the array" << endl;
	cin >> total;
	cout << "Enter the element you want to enter in the array" << endl;
	cin >> element;
	cout << "Enter at which position you want to insert the element in the array"<< endl;
	cin >> position;
	cout << "Enter the elements in the arrray\n";
	for(i = 0;i < total;i++)
	{
		cin >> a[i];
	}
	for(i = total - 1; i >= position - 1; i--)
	{
		a[i + 1] = a[i];
	}
	
	a[position - 1] = element;
	
	for(i = 0; i <= total;i++)
	{
		cout << a[i] << endl;
	}
	
	return 0;
}
