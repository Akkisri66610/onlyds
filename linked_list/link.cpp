#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
}*start = NULL, *last = NULL;


int main()
{
  node *temp;
  char ch;
  do
  {
    temp = new node;
    cout<<"\nEnter the data : ";
    cin>>temp->data;
    temp->next = NULL;
    if (start == NULL)
    {
      start = temp;
      last = temp;
    }
    else
    {
      last->next = temp;
      last = temp;
    }
    cout<<"\nDo you want to enter more data (Y/n): ";
    cin>>ch;

  } while(ch == 'y' || ch == 'Y');

  temp = start;
  while(temp != NULL)
  {
    cout<<temp->data<<"-->";
    temp = temp->next;
  }
  cout<<"X\n";


}
