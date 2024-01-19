#include<bits/stdc++.h>
using namespace std;

//int x=19;
/*struct node{
	int data;
	struct node *next;

	node(){                 //constructor
		data =0;
		next = NULL;
	}
};

struct node *head=NULL;

void get_data(int n){
	int data;
	head = new node();
	cin>>data;
	head->data = data;

	if(head != NULL){
		struct node *temp = head;
		struct node *p;
		for(int i=1;i<n;i++){
			cin>>data;
			p = new node();
			p->data = data;
			p->next = NULL;
			temp->next = p;
			temp = temp->next;
		}
	}
}
void show_data(){
if(head != NULL){
	struct node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	free(temp);
}
}*/

int main(){
	/*int x=41;
	{
		int x=20;
		cout<<::x<<x<<::x;
	}*/
	/*int n;
	cin>>n;
	get_data(n);
	show_data();*/
    int a[] = {1,2,3,4,5,6};
    int *p, *q, *r;
	cout<<"1 "<<p<<" "<<a<<endl;
    p = a;
	cout<<"2 "<<p<<" "<<a<<endl;
	cout<<"3 "<<q<<" "<<a<<endl;
    q = a + 2;
	cout<<"4 "<<q<<" "<<a<<endl;
	cout<<"5 "<<r<<" "<<p<<endl;
    r = *p;
	*p+=1;
	cout<<"6 "<<r<<" "<<p<<endl;
    printf("%d%d%d", r, q-p);
}