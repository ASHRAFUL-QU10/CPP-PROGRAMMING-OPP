// K’th Largest Element in BST when modification to BST is not allowed

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(){
        data=0;
        left=right=NULL;
    }
};

struct node *start=NULL;
struct node *temp;

void bst(int data){
    if(start==NULL){
        start = new node();
        start->data = data;
    }
    else{
        temp = start;
        struct node *parent = start;

        while(temp != NULL){
            if(temp->data < data){
                parent = temp;
                temp = temp->right;
            }
            else if(temp->data>data){
                parent = temp;
                temp = temp->left;
            }
        }
        if(parent->data < data){
            parent->right = new node();
            parent->right->data = data;
        }
        else{
            parent->left = new node();
            parent->left->data = data;
        }
    }
}

void get_element(int n){
    int data=0;
    for(int i=0;i<n;i++){
        cin>>data;
        bst(data);
    }
}

void printtree(node* start,int i,int arr[]){
    if(start==NULL)
    return;

    printtree(start->left,i,arr);
    arr[i++] = start->data;
    printtree(start->left,i,arr);
}

int main(){
    int n=0;
    cin>>n;

    get_element(n);

    int k=0;
    cout<<"Enter the kth largest element:- ";
    cin>>k;
    int arr[n]={0};

    printtree(start,0,arr);

    for(int i=0;i<n;i++){
        cout<<"i = "<<i<<" =  "<<arr[i]<<endl;
    }
}
