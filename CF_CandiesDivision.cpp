#include<bits/stdc++.h>
using namespace std;

main()
{
#ifdef _DEBUG
freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif
    int tc,n,k;
    cin>>tc;
    while(tc>0)
    {
        cin>>n>>k;
        int b=n-n%k;
		b+=min(n%k,k/2);
		cout<<b<<endl;
        tc-=1;
    }
}