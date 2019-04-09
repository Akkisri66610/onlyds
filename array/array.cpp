#include<iostream>
using namespace std;

int ReturningArray(int n)
{
	int elements = n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		return a[i];
	}
}

int main()
{
	cout << "Enter the no. of elements in the array\n";
	int number;
	cin >> number;
	int array[number];
	for(int i = 0; i < number; i++)
	{
		array[i] = ReturningArray(number);
	}
	
	for(int i = 0; i < number; i++)
	{
		cout << array[i] << endl;
	}
	
	return 0;
}
