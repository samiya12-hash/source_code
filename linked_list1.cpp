///simple linked list and inserting element at the last..
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
    address = (struct node*)malloc(sizeof(struct node));
    address->data = value;
    address->link = NULL;
    if(head == NULL)
    {
        head = address;
    }
    else
    {
        struct node* temp;
        temp = head;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = address;
    }
}
int main()
{
    head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 67;
    head->link = (struct node*)malloc(sizeof(struct node));
    head->link->data = 89;
    head->link->link = (struct node*)malloc(sizeof(struct node));
    head->link->link->data = 90;
    head->link->link->link = NULL;
    print();
    head = NULL;
    insert(5);
    insert(6);
    insert(8);
    insert(7);
    print();
    return 0;
}
*/
///front add korbo...///delete ...by value;
#include<bits/stdc++.h>
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
void delet(int value)
{
    struct node* prev_address;
    struct node* temp;
    temp = head;
    int c=0;
    while(temp->data!=value)
    {
        c++;
        prev_address = temp;
        temp = temp->link;
    }
    if(c==0)head = temp->link;
    else prev_address->link = temp->link;
}
int main()
{
    head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 5;
    head->link = (struct node*)malloc(sizeof(struct node));
    head->link->data = 6;
    head->link->link = NULL;
    insert(7);
    insert(9);
    print();
    cout<<endl<<endl;
    delet(9);
    delet(5);
    print();
}
