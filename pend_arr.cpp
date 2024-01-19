#include<iostream>
#include<algorithm>
#include<stdlib.h>
#define f(i,a,b) for(i=a;i<b;i++)

using namespace std;

int i;

void pend(int *a,int n)
{
    int *q=new int[n];
    int z;
    if(n%2!=0)  z=n/2;
    else        z=n/2 - 1; 
    int x,y;
    i=0;
    q[z]=a[i++];

    for(x=z-1,y=z+1;y<n,x>-1;y++,x--)
    {
        q[y]=a[i++];
        q[x]=a[i++];
    }
    if(n%2==0) q[n-1]=a[n-1];
    f(i,0,n)  cout<<q[i];
}

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *a=new int[n];
        f(i,0,n)   cin>>a[i];
        sort(a,a+n);
        pend(a,n);
        delete[] a;
    }
}


    
