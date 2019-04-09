#include<iostream>
using namespace std;

int main()
{
	int students,tests,i,j;
	int a[10][10];
	
	cout << "Enter the no. of students \n";
	cin >> students;
	
	cout << "Enter the no. of tests each student have to give\n";
	cin >> tests;
	
	// taking user input 
	for(i = 0; i < students;i++) // for no. of students , outer loop is mainly for a condition
	{
		cout << "Enter the no. of " << i + 1 << "student :";
		for(j = 0; j < tests;j++) // for no. of tests, inner loop is mainly for rows and what is in the program
		{
			cin >> a[i][j];
		}
	}
	
	// displaying user input
	for(i = 0; i < students;i++)
	{
		for(j = 0; j < tests;j++)
		{
			cout << a[i][j] << endl;
		}
	}
}
