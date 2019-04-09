#include<iostream>
using namespace std;

int main()
{
	int total,i,j,temp;
	int a[10];
	
	cout << "Enter the total no. of elements in the array\n";
	cin >> total;
	
	cout << "Enter the elements in the array\n";
	
	for(i = 0; i < total;i++)
	{
		cin >> a[i];
	}
	
	cout << "Elements in the array is: ";
	
	for(i = 0; i < total;i++)
	{
		cout << a[i] << endl;
	}
	
	for(i = 0; i < total ;i++)
	{
		for(j = 0;j < total - i - 1;j++)
		{
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	// the elements of the new array will be
	for(i = 0;i < total;i++)
	{
		cout << a[i] << endl;
	}
}
