#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

int main()
{
  node *start = NULL,*last = NULL;
  node *temp;
  char ch;

  do {
    temp = new node;
    cout << "Enter the data\n";
    cin >> temp->data;

    if(start == NULL)
    {
      start = temp;
      last = temp;
    }

    else
    {
      last->next = temp;
      last = temp;
    }
    cout << "Do you want to enter more data ";
    cin >> ch;
   } while(ch == 'y' || ch == 'Y');

  /* if(start == NULL)
   {
     temp = new node;
     start = temp;
     last = temp;
   }

   else
   {
     temp = new node;
     cout << "Enter the data ";
     cin >> temp->data;
     temp->next = start;
     start = temp;
   }  */

   /*if(start != NULL)
   { temp = new node;
     cout << "Enter the value in new node ";
     cin >> temp->data;
     last -> next = temp;
     last = temp;
     temp->next = NULL;
   }

   else if(start == NULL)
   {
     temp = new node;
     cout << "Enter the value in new node";
     cin >> temp->data;
     start = temp;
     last = temp;
     temp->next = NULL;
   }*/

   

   temp = start;
   while(temp!=NULL)
   {
     cout << temp->data;
     cout << "->";
     temp = temp->next;
   }
   cout << "x";
}
