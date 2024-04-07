# include <bits/stdc++.h>

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

int main()
{
    ll t, pts = 3;
    cin>>t;
	while(t > pts)
	{
		t -= pts;
		pts *= 2;
	}
	cout<<pts - t + 1;

}
