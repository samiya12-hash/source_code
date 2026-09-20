#include <iostream>
#include <cstdlib>
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
    if(head==NULL)cout<<"empty"<<endl;
    while(temp->link!=head)
    {
    	cout<<temp->data<<endl;
    	temp = temp->link;
    }
}
void insert_end(int val)
{
	struct node* address;
	address = (struct node*)malloc(sizeof(struct node));
	address->data = val;
	address->link = NULL;
	if(head==NULL)
	{
		head = address;
	}
	else {
	struct node* temp = head;
	while(temp->link!=NULL)
	{
		temp = temp->link;
	}
	
	temp->link = address;
	}
}
void insert_front(int val)
{
	struct node* address ;
	address = head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = val;
	head->link = address;
	struct node* temp = address;
	while(temp->link!=address)
	{
	    temp = temp->link;
	}
	temp->link = head;
}

void insert_pos(int pos,int val)
{
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
        return;
    }
    struct node* address;
    address = (struct node*)malloc(sizeof(struct node));
    address->data = val;
    if(pos==1)insert_front(val);
    else 
    {
        struct node* temp = head;
        int c = 1;
        while(c<pos-1 && temp->link!=head)
        {
            temp = temp->link;
            c++;
        }
        if(temp->link!=head)
        {
            address->link = temp->link;
            temp->link = address;
        }
        else insert_end(val);
    }
}

void insert_loc(int val2,int val1)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    struct node* address;
    address = (struct node*)malloc(sizeof(struct node));
    address->data = val2;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp = head;
    bool flag = false;
    while(temp->link!=head)
    {
        if(temp->data==val1)
        {
            flag = true;
            break;
        }
        temp = temp->link;
    }
    if(flag)
    {
        address->link = temp->link;
        temp->link = address;
    }
}


void deletebeg()
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    struct node* address = head;
    head = head->link;
    struct node* temp = address;
    while(temp->link!=address)
    {
        temp = temp->link;
    }
    temp->link = head;
}

void deletelast()
{
    if(head==NULL)
    {
        cout<<"empty list"<<endl;
        return ;
    }
    else if(head->link==head)
    {
        free(head);
        return;
    }
    else 
    {
        struct node* temp = head;
        while(temp->link->link!=head)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = head;
    }
}


void deletepos(int pos)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    if(pos==1)deletebeg();
    else 
    {
        struct node* temp = head;
        struct node* prev = NULL;
        int c = 1;
        while(c<pos && temp->link!=head)
        {
            prev = temp;
            temp = temp->link;
            c++;
        }
        if(temp->link!=head)
        {
            prev->link = temp->link;
            free(temp);
        }
        else deletelast();
    }
    
    
}


int main()
{
		insert_front(10);
		insert_front(20);
		insert_end(20);
		insert_end(40);
		insert_end(50);
		insert_front(70);
	    insert_pos(2,30);
	    insert_pos(6,80);
	    insert_loc(100,70);
	    print();
	    cout<<"after deleting the first element"<<endl;
	    deletebeg();
	    print();
	    cout<<"after deleting the last element"<<endl;
	    deletelast();
	    print();
	    cout<<"after deleting the certain position element"<<endl;
	    deletepos(3);
	    print();
// 	    int val,loc;cin>>val>>loc;
// 	    insert_loc(val,loc);
}
