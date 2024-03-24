#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define sp "\t"

using namespace std;

int i;

struct node
{
    int data;
    struct node *next;

    node()
    {
        data=0;
        next=NULL;
    }
};

struct node *head=NULL;

void create_LL(int n)
{
    head = new node();                                  //dynamic allocation of new Node
    cout<<"\nEnter Data for Node 1:\n";                 //1st element    
    cin>>head->data;

    if(head!=NULL)                                     //rest of the elements
    {
        struct node *temp,*p=head;
        f(i,0,n-1)
        {
            cout<<"\nEnter Data for Node "<<i+2<<":\n";    
            struct node *temp=new node();           
            cin>>temp->data;
            p->next=temp;
            p=temp;
        }
        free(temp);
    }
}

void display_LL()
{
    if(head==NULL)
    {
        cout<<"\nLinked List is Empty!\n";
    }
    else
    {
        struct node *temp=head;
        i=0;
        while(temp!=NULL)
        {
            cout<<"\n"<<i+1<<sp<<"->"<<sp<<temp->data;
            i++;
            temp=temp->next;
        }
        free(temp);
    }
    
}

main()
{
    int n;
    cout<<"\nEnter the No. of Nodes you want to Insert:\n";
    cin>>n;
    if(n!=0)
    {
        create_LL(n);
    }
    display_LL();
}

