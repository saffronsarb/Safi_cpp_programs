#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void deleteLast(Node* &head)
{
    if(head==NULL)
    return;

    if(head->next==NULL) 
    {
        delete head;
        head=NULL;
        return;
    }

    Node *temp=head;

    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    delete temp->next;
    temp->next=NULL;
}

int main()
{
    Node *head=NULL,*temp,*newnode;

    for(int i=1;i<=3;i++)
    {
        newnode=new Node;
        newnode->data=i*10;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    

    deleteLast(head);

    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}