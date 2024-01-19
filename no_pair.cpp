// To Check if a Given Point exists in an Interval or Not.

#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fe(i,a,b) for(i=a;i<=b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

void print(vector<ll>& a, char sep = ' ')
{
    for(auto i : a) { cout<<i<<sep; }
}

ll mod_opr(ll num)
{
    return num % mod;
}

bool compare(ll x, ll y)
{
    return x > y ? true : false;
}

int main()
{

    // All the Operations are done in O(LogN) time.

    set<pair<int, int> > S;
    
    S.insert({401, 450});
    S.insert({10, 20});
    S.insert({2, 3});
    S.insert({30, 400});

    int point = 50;

    auto it = S.upper_bound({point, INT_MAX});

    if(it == S.begin())
    {
        cout<<"The Given Point is not Lying in any Interval..\n";
    }

    it--;
    pair<int, int> current = *it;
    if(current.first <= point && point <= current.second)
    {    
        cout<<"Yes it's Present! : "<<current.first<<" "<<current.second<<endl;
    }
    else
    {
        cout<<"The Given Point is not Lying in any Interval..\n";
    }
    
    return 0;

}