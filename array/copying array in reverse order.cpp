#include<iostream>
using namespace std;

int main()
{
	int a[5], b[5], total, i , j ,k;
	
	cout << "Enter the total no. of elements in the array\n";
	cin >> total;
	
	for(i = 0; i < total;i++)
	{
		cin >> a[i];
	}
	
	for(i = total-1,j = 0; i > 0,j <total ;i--,j++) // copy the contents of one array into another in reverse order
	{
		b[j] = a[i];
	}
	
	for(i = 0; i < total;i++)
	{
		cout << b[i] << endl;
	}
}
