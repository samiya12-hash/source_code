#include<bits/stdc++.h>
using namespace std;
typedef struct NODE node;
struct NODE
{
    int data;
    node* left;
    node* right;
};

node* create_node(int n)
{
    node* ne = (node*)malloc(sizeof(node));
    ne->data = n;
    ne->left = NULL;
    ne->right = NULL;
    return ne;
}

void add_left(node* ne,node* child)
{
    ne->left = child;
}

void add_right(node* ne,node* child)
{
    ne->right = child;
}

node* create_tree()
{
    node* two = create_node(2);
    node* seven = create_node(7);
    node* nine = create_node(9);
    add_left(two,seven);
    add_right(two,nine);

    node* one = create_node(1);
    node* six = create_node(6);
    add_left(seven,one);
    add_right(seven,six);

    node* eight = create_node(8);
    add_right(nine,eight);

    node* five = create_node(5);
    node* ten = create_node(10);
    add_left(six,five);
    add_right(six,ten);


    node* three = create_node(3);
    node* four = create_node(4);
    add_left(eight,three);
    add_right(eight,four);

    return two;
}


void pre_order_printing(node* root)
{
    cout<<root->data<<" ";
    if(root->left!=NULL)
    {
        pre_order_printing(root->left);
    }
    if(root->right!=NULL)pre_order_printing(root->right);
}

void post_order(node* root)
{
    if(root->left!=NULL) post_order(root->left);
    if(root->right!=NULL)post_order(root->right);
     cout<<root->data<<" ";
}


void in_order(node* root)
{
    if(root->left!=NULL)in_order(root->left);
    cout<<root->data<<' ';
    if(root->right!=NULL) in_order(root->right);
}

int main()
{
    node* root = create_tree();
    cout<<root->data<<endl;

    cout<<"pre order: "<<endl;pre_order_printing(root);cout<<endl;

    cout<<"post order: "<<endl;post_order(root);
    cout<<endl;
    cout<<"in order: "<<endl;in_order(root);
    return 0;
}
