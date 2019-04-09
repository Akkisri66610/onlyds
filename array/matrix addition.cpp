#include<iostream>
using namespace std;

int main()
{
	int a[10][10] , b[10][10] ,c[10][10] , i , j , total ;
	cout << "Enter the total number of elements in the 2-d array\n";
	cin >> total;
	
	// taking user input
	for(i = 0; i < total;i++) // for rows here only for matrix not applicable to any other thing
	{
		for(j = 0; j < total;j++)
		{
			cin >> a[i][j];
		}
	}
	
	// displaying user input
	for(i = 0; i < total;i++)
	{
		for(j = 0; j < total;j++)
		{
			cout << a[i][j] << endl;
		}
	}
	
	for(i = 0; i < total;i++)
	{
		for(j = 0; j < total;j++)
		{
			cin >> b[i][j];
		}
	}
	
	for(i = 0; i < total;i++)
	{
		for(j = 0; j < total;j++)
		{
			cout << b[i][j] << endl;
		}
	}
	
	// matrix addition
	for(i = 0; i < total;i++)
	{
		for(j = 0; j < total;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// displaying matrix addition
	for(i = 0; i < total;i++)
	{
		for(j = 0; j < total;j++)
		{
			cout << c[i][j] << endl;
		}
	}
	
	return 0;
}
