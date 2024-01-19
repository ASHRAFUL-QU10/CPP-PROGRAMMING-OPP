/*E. Sleeping Schedule
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vova had a pretty weird sleeping schedule. There are h hours in a day. Vova will sleep exactly n times. The i-th time he will sleep exactly after ai hours from the time he woke up. You can assume that Vova woke up exactly at the beginning of this story (the initial time is 0). Each time Vova sleeps exactly one day (in other words, h hours).

Vova thinks that the i-th sleeping time is good if he starts to sleep between hours l and r inclusive.

Vova can control himself and before the i-th time can choose between two options: go to sleep after ai hours or after ai−1 hours.

Your task is to say the maximum number of good sleeping times Vova can obtain if he acts optimally.

Input
The first line of the input contains four integers n,h,l and r (1≤n≤2000,3≤h≤2000,0≤l≤r<h) — the number of times Vova goes to sleep, the number of hours in a day and the segment of the good sleeping time.

The second line of the input contains n integers a1,a2,…,an (1≤ai<h), where ai is the number of hours after which Vova goes to sleep the i-th time.

Output
Print one integer — the maximum number of good sleeping times Vova can obtain if he acts optimally.

Example
inputCopy
7 24 21 23
16 17 14 20 20 11 22
outputCopy
3
Note
The maximum number of good times in the example is 3.

The story starts from t=0. Then Vova goes to sleep after a1−1 hours, now the time is 15. This time is not good. Then Vova goes to sleep after a2−1 hours, now the time is 15+16=7. This time is also not good. Then Vova goes to sleep after a3 hours, now the time is 7+14=21. This time is good. Then Vova goes to sleep after a4−1 hours, now the time is 21+19=16. This time is not good. Then Vova goes to sleep after a5 hours, now the time is 16+20=12. This time is not good. Then Vova goes to sleep after a6 hours, now the time is 12+11=23. This time is good. Then Vova goes to sleep after a7 hours, now the time is 23+22=21. This time is also good. */

/*#include<iostream>
#define f(i,a,b) for(i=a;i<b;i++)
using namespace std;

int incheck(int a,int b,int s,int l,int r)
{
    cout<<"\na[i]="<<a[i]<<"\ts="<<s<<"\n";
    cout<<"\nInitial Check:\n";
    int y=s+a;
    int flag=0;
    if(y>24) 
    {
        y-=24;
        //cout<<"if y change:"<<y<<"\n";
    }
    int m=y+b;
    if(m>24) 
    {
        m-=24;
        //cout<<"if y change:"<<y<<"\n";
    }
    if(m>l-1 && m<r+1)
    {
        flag=1;
    }
    if(y >= l && y <= r || flag == 1)    
    {
        return a;
    }
    else 
    {
        return a-1;
    }
}

main()
{
    int n,h,l,r;
    cin>>n>>h>>l>>r;
    int a[n],i=0;
    f(i,0,n)  cin>>a[i];
    int c=0,s=0,x;
    f(i,0,n)
    {
        x=incheck(a[i],a[i+1],s,l,r);
        //cout<<"\nFinal Check:\n";
        //cout<<"x:"<<x<<"\n";
        s+=x;
        //cout<<"s:"<<s<<"\n";
        if(s>24) 
        {
            s-=24;
            //out<<"if s change:"<<s<<"\n";
        }
        if(s>=l && s<=r) 
        {
            c++;
            //cout<<"c:"<<c<<"\n";
        }
        //cout<<"\nEND of Loop\n";
    }
    cout<<c;
}*/

/*#include <bits/stdc++.h>

using namespace std;

bool in(int x, int l, int r) {
	return l <= x && x <= r;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, h, l, r;
	cin >> n >> h >> l >> r;
	vector<int> a(n);
	for (auto &it : a) cin >> it;
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));
	dp[0][0] = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += a[i];
		for (int j = 0; j <= n; ++j) {
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + in((sum - j) % h, l, r));
			if (j < n) dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + in((sum - j - 1) % h, l, r));
		}
	}
	
	cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
	
	return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

vector<int> a;
vector<int> dp;
vector<int> ans;
vector<vector<int>> g;

void dfs(int v, int p = -1) {
	dp[v] = a[v];
	for (auto to : g[v]) {
		if (to == p) continue;
		dfs(to, v);
		dp[v] += max(dp[to], 0);
	}
}

void dfs2(int v, int p = -1) {
	ans[v] = dp[v];
	for (auto to : g[v]) {
		if (to == p) continue;
		dp[v] -= max(0, dp[to]);
		dp[to] += max(0, dp[v]);
		dfs2(to, v);
		dp[to] -= max(0, dp[v]);
		dp[v] += max(0, dp[to]);
	}
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	a = dp = ans = vector<int>(n);
	g = vector<vector<int>>(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == 0) a[i] = -1;
	}
	for (int i = 0; i < n - 1; ++i) {
		int x, y;
		cin >> x >> y;
		--x, --y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	
	dfs(0);
	dfs2(0);
	for (auto it : ans) cout << it << " ";
	cout << endl;
	
	return 0;
}
