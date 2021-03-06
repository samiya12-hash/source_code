/*///DOUBLY LINKED LIST.......................
#include<bits/stdc++.h>
using namespace std;
void insert(int);
void prepend(int);
void print();
void delet(int);


typedef struct NODE node;


struct NODE
{
    int data;
    node* link;
    node* prev;
};

node* head = (node*)malloc(sizeof(node));

int main()
{
    head = NULL;
    insert(5);
    insert(6);
    prepend(8);
    prepend(100);
    prepend(78);
    delet(78);
    delet(6);
    print();
    free(head);
}

void insert(int n)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = n;temp->link=NULL;
    if(head==NULL)
    {
        head = temp;
        head->prev = NULL;
    }
    else
    {
        node* temp2 = head;
        while(temp2->link!=NULL)
        {
            temp2 = temp2->link;
        }
        temp2->link = temp;
        temp->prev = temp2;
    }
}

void print()
{
        node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp = temp->link;
            cout<<endl;
        }
    }

void prepend(int n)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = n;
    temp->link = head;
    temp->prev = NULL;
    head->prev = temp;
    head = temp;
}

void delet(int n)
{
    if(head->data==n)
    {
        head = head->link;
        head->prev = NULL;
    }
    else
    {
        node* temp = head;
        while(temp->data!=n)
        {
            temp = temp->link;
        }
        temp->prev->link = temp->link;
    }
}
*/
/// to atao delete er code just position diye..
/*#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node* head;
void print()
{
   struct node* temp;
   temp = head;
   while(temp!=NULL)
   {
       cout<<temp->data<<endl;
       temp = temp->link;
   }
}
void insert(int value)
{
    struct node* address;
    address = head;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = value;
    head->link = address;
}
void deletenode(int position)
{
   struct node* temp;
   temp = head;
   if(position==1)
   {
       struct node* temp3;
       temp3 = head;
       head = head->link;
       free(temp3);
   }
    else
   {
       for(int i=1;i<=position-2;i++)
       {
           temp = temp->link;
       }
       struct node* temp2;
       temp2 = temp->link;
       temp->link = temp2->link;
       free(temp2);
   }
}
int main()

{
  head = NULL;
  insert(4);
  insert(6);
  deletenode(6);
*/
///insert number by sorting order////
/*#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* link;
};
struct node* head;
void print()
{
   struct node* temp;
   temp = head;
   while(temp!=NULL)
   {
       cout<<temp->data<<endl;
       temp = temp->link;
   }
}
void insertAtTheEnd(int value)
{
    struct node* temp2;
    temp2 = (struct node*)malloc(sizeof(struct node));
    temp2->data = value;
    temp2->link = NULL;
    struct node* temp;
    temp = head;
    if(head==NULL)
    {
        head = temp2;
    }
    else
    {
    while(temp->link!=NULL)
    {
        temp = temp->link;
    }
    temp->link = temp2;
    }
}
void insert(int value)
{
    struct node* temp2;
    temp2 = (struct node*)malloc(sizeof(struct node));
    temp2->data = value;
    if(head == NULL||temp2->data<=head->data)
    {
        temp2->link = head;
        head = temp2;
    }
    else
    {
       struct node* pred;
       struct node* p;
       pred = head;
       p = pred->link;
       while(pred->link!=NULL && temp2->data>=p->data)
       {
           pred = p;
           p = p->link;
       }
       pred->link = temp2;
       temp2->link= p;
    }
}
int main()
{
    head = NULL;
    insertAtTheEnd(8);
    insertAtTheEnd(7);
    insertAtTheEnd(9);
    insert(5);
    insert(5);
    insert(10);
    print();
    cout<<endl<<endl;
    return 0;
}
*/
