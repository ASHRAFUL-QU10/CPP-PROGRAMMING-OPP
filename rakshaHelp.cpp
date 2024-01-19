#include<iostream>
using namespace std;

int CardsPyramid(int n){

    int mod = 1000007;

    if(n == 0){
        return -1;
    }
    else{
        return (n * ( 3 * n + 1) / 2) % mod;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<CardsPyramid(n);
}

