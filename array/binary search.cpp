#include<iostream>
using namespace std;

int main()
{
	int total,i,j,mid,beg,end,element,loc;
	int a[10];
	
	cout << "Enter the total no. of elements in the array\n";
	cin >> total;
	cout << "Enter which element you want to search in the array\n";
	cin >> element;
	cout << "Enter the element of the array\n";
	
	for(i = 0;i < total;i++)
	{
		cin >> a[i];
	}
	
	beg = 0;
	end = total - 1;
	mid = (beg + end) / 2;

	while(beg <= end)
	{
		if(a[mid] > element)
		{
			end = mid - 1;
		}
		
		else if(a[mid] < element)
		{
			beg = mid + 1;
		}	
		
		else
		{
				cout << "Element found at " << mid + 1<< " location";
				break;
		}
		
		mid = (beg + end) / 2;
	}	
	
	cout << "The smallest no. in the array is " << a[0] << endl;
	cout << "The largest no. in the array is " << a[total -1] ;
}
