#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;

int ar[100],mx=1;

int Sort(int l, int r)
{
	if(l+1==r)
	{
		if(ar[l]<=ar[r])
			return 2;
		return -1;
	}

	int mid=(l+r)/2;
	int x=Sort(l,mid);
	int y=Sort(mid+1,r);
	mx=max(mx,max(x,y));
	if(x>0 and y>0 and ar[mid]<=ar[mid+1])
		mx=x+y;
	return -1;
}

int main()
{
	int n,i,x;
	cin>>n;
	f(i,0,n)
		cin>>ar[i];
	x=Sort(0,n-1);
	cout<<mx;
}
