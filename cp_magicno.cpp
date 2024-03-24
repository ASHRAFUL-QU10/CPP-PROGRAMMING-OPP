#include<bits/stdc++.h>
#define f(i,a,b) for(i=a;i<b;i++)
using namespace std;

int i,j;

main()
{
    /*int sum=0;
    int a[3][3];
    int s[3][3]={{4,9,2},{3,5,7},{8,1,6}};
    f(i,0,3)
        f(j,0,3)
            cin>>a[i][j];
    f(i,0,3)
        f(j,0,3)
            sum+=abs(s[i][j]-a[i][j]);
    cout<<sum;*/
    vector<int> a;
    a.push_back(7);
    a.push_back(9);
    a.push_back(9);
    a.push_back(1);
    a.push_back(0);
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(0);
    a.push_back(8);
    /*for(auto i:a)
    {
       cout<<i; 
       
    }*/
    cout<<*a;

}
