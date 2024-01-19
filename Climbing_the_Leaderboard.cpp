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

main()
{
    vector<int> s;
    vector<int> a;
    int i,n,na;
    cin>>n;
    f(i,0,n)
    {
        int p;
        cin>>p;
        s.push_back(p);
    }
    vector<int>::iterator ip; 
    ip=std::unique(s.begin(),s.end());                           //removes the duplicate
    s.resize(std::distance(s.begin(),ip));                       //resizes the vector
    n=s.size();
    cin>>na;                                                     
    f(i,0,na)
    {
        int p;
        cin>>p;
        a.push_back(p);
    }
    for(auto y:a)
    {
        int flag=0;
        fr(i,n-1,0)
        {
            if(flag==0)
            {
                if(y>s[i] && y<s[i-1])  {cout<<i+1<<" ";flag=1;}
                else if(y>s[i])         {cout<<i+1;flag=1;}
                if(s[i]>y)              {cout<<i+2<<" ";flag=1;}                
            }
        }
    }
}   