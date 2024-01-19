#include <bits/stdc++.h>

using namespace std;
long long int dp[100000000]={0};

long long int change(long long int n)
{
    if(n<=8)
       return n;
    else if(n<100000000 && dp[n]!=0)
      return dp[n];
    else 
    {
        if(n<100000000)
        dp[n]=max(n,change(n/2)+change(n/3)+change(n/4));
        return max(n,change(n/2)+change(n/3)+change(n/4));
    }
}
main() 
{
	long long int n;
	scanf("%lld",&n);
	long long int ans= change(n);
	cout<<ans<<endl;
}