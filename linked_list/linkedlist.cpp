#include<iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};


int main()
{
  node *first = new node;
  node *second = new node;
  node *last = new node;
  first->data = 1;
  first->next=second;
  second->data = 2;
  second->next = last;
  last->data = 3;
  last->next = NULL;
  node *temp = first;
  while(temp != NULL)
  {
    cout<<temp->data<<"-->";
    temp = temp->next;
  }
  cout<<"X\n";
}
