#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define sp "\t"
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std; 
  
int i,n,*a;

int maxzlen() 
{ 
    unordered_map<int, int> x;   
    int s=0,l=0; 

    f(i,0,n)
    { 
        // Add current element to sum 
        s += a[i]; 
  
        if (a[i] == 0 && l == 0) 
            l = 1; 
        if (s == 0) 
            l = i + 1; 
  
        // Look for this sum in Hash table 
        if (x.find(s) != x.end()) { 
            // If this sum is seen before, then update max_len 
            l = max(l, i - x[s]); 
        } 
        else { 
            // Else insert this sum with index in hash table 
            x[s] = i; 
        } 
    }
    return l;
}
  

main() 
{ 
    cout<<"\nEnter the No. of Elements:";
    cin>>n;
    a=new (nothrow) int[n];
    cout<<"\nEnter your Array:\n";
    f(i,0,n)
       cin>>*(a+i);
    maxzlen();
    cout<<"\nYour Array:\n";
  
    f(i,0,n)
       cout<<*(a+i)<<sp;
    delete[] a;
    cout<<"\nThe Max Length is :"<<maxzlen();
}
//qu10
