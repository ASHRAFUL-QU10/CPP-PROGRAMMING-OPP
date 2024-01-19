/*High Radius Tech Track Coding
Set A
Q. You're a coach at a local university, there are n students under you, the programming skill of the i-th student is a[i]. Create a balanced team for a programming comp..
Take in more students(increases probability of winning). Create a team with maximum no. of students but the overall skill difference shouldn't exceed 5.
1st Line Consists of no. of students n and the next line programming skill of i-th student.

Sample i/p-
6
1 15 2 10 12 17
Sample o/p-
3
*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;

bool comp(int a,int b) 
{ 
    return (a<b); 
} 

main()
{
    int n,i,j,x;
    vector<int> a;
    cin>>n;
    f(i,0,n)
    {
        cin>>x;
        a.push_back(x%mod);
    }
    sort(a.begin(),a.end());
    int c=1;
    vector<int> cn;
    f(i,0,n-1)
    {
        j=n-1;
        int flag=0;
        while(j>i && flag == 0)
        {
            if(a[j]-a[i]<= 5)
            {
                c=j-i+1;                    
                flag=1;
            }
            else   j--;
            if(flag==1)     cn.push_back(c%mod);c=1;
        }
    }
    cout<<*max_element(cn.begin(),cn.end(),comp);
}
//Code by Rahul Bordoloi