#include<iostream>
using namespace std;

int main()
{
	int total1, total2 , a[10][10], b[10][10], c[10][10], i, j, k;
	cout << "Enter the total no. of elements in first matrix\n";
	cin >> total1;
	
	cout << "Enter the total no. of elements in second matrix\n";
	cin >> total2;
	
	cout << "Enter the elements of the first matrix : ";
	
	for(i = 0;i < total1;i++)
	{
		for(j = 0;j < total1;j++)
		{
			cin >> a[i][j];
		}
	}
	
	cout << "Enter the elements of second matrix : ";
	
	for(i = 0;i < total2;i++)
	{
		for(j = 0;j < total2;j++)
		{
			cin >> b[i][j];
		}
	}
	
	for(i = 0;i < total1;i++)
	{
		for(j = 0;j < total1;j++)
		{
			c[i][j] = 0;
		}
	}
	
	for(i = 0;i < total1;i++)
	{
		for(j = 0;j < total2;j++)
			{	
				for(k = 0;k < total1;k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
	}
	
	for(i = 0;i < total1;i++)
	{
		for(k = 0;k < total2;k++)
		{
			cout << c[i][k] << endl;
		}
	}
}
