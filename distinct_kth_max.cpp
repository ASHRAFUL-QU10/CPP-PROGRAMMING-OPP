# include<bits/stdc++.h>
# define f(i,a,b) for(int i = a; i < b; i++)
using namespace std;

int main()
{
	
	// Online Judge Macro
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Variables and I/O
	int n, k;
	cin>>n;
	vector<int> x(n);
	for(int& i : x){ cin>>i; }
	cin>>k;

    // Finding Difference Set
	set<int> temp(x.begin(), x.end());
	f(i, 0, n){
		f(j, i + 1, n){
			temp.insert(abs(x[j] - x[i]));
		}
	}
	
	// Answer
	cout<<*std::next(temp.begin(), temp.size() - k);
	return 0;
}
