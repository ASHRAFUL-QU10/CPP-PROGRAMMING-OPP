#include<bits/stdc++.h>
#define f(i,a,b) for(i=a;i<b;i++)

using namespace std;

int i=0,j=0;
void sor(int v[100],int n, int s)
{
    int k=1,c=1;
    i=0;
    while(i<n-1 && k<n && k!=i)
    {
        if((v[k]-v[i]) > s)
        {    
            ++c;
            i=k++;
        }
        else  k++;    
    }
    cout<<c<<endl;
}

void unsor(int v[100],int n,int s)
{
    int *t = NULL,c=1;   
    t = new int[n];
    j=0;
    t[0]=v[j++];
    f(i,1,n)
    {
        int *y = std::min_element(t,t + j); 
        if(v[i]- *y < s )
        {
            t[j++]=v[i];
        }
        else
        {
            ++c;
            delete[] t;
            t = new int[n];
            j=0;
            t[0]=v[i];
        }              
    }
    delete[] t;
    cout<<c<<endl;
}

main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,s;
        cin>>n>>s;
        int v[n];
        f(i,0,n) cin>>v[i];
        if(is_sorted(v,v+n))   sor(v,n,s);              //if the given data is sorted
        else  unsor(v,n,s);                             //if the given data is sorted
    }
}