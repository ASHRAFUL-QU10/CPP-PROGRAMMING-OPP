// roli.cpp
// Two - Characters
// Author - R-07.
// profile - https://github.com/rahulbordoloi
// question link - https://www.hackerrank.com/challenges/two-characters/problem 

#include<bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fi(i,a,b) for(i=a;i<=b;i++)
#define fr(i,a,b) for(i=a;i>b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

/*common variables
ll t=0;
char s[t];
*/

ll alt(ll t, char *s)
{
    ll i,j,k;            // iterators
    ll a=0;             // trash
    fi(i,'a','z')
    {
        fi(j,'a','z')
        {
            if(i!=j)
            {
                ll c=0;
                fi(k,0,t-1)
                {
                    if(*(s+k)==i || *(s+k)==j)
                    {
                        if(c%2==0 && *(s+k)==i)    c++;
                        else if(c%2==1 && *(s+k)==j)   c++;
                        else{c = 0; break;}
			        }
		        }
		        if(c>1) a = max(a,c);
	        }
        }
    }
    return a;
}

int main()
{
    ll t;
	cin>>t;
    char s[t];    
    cin>>s;
	cout<<alt(t,s);
}
//qu10
