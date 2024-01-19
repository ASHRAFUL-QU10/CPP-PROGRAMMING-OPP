#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define sp "\t"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

using namespace std;

main()
{
    vector<int> a;
    //a.push_back(10);
    //cout<<a[0];
    int i;
    f(i,0,5)
    {
      int x;
      cin>>x;
      a.push_back(x);
    }
    i=0;
    //while(a.begin()!=a.end())
    for(i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
}