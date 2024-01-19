#include<bits/stdc++.h>
#include<stdlib.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define sp "\t"

using namespace std;

main()
{
    string s;
    getline(cin,s);
    int l=s.length();
    int i,j=0,x[30];
    f(i,0,l)
    {
        if(isdigit(s[i])) //s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')       
            x[j++]=s[i];
    }
    f(i,0,j) cout<<char(16+x[i])<<sp;
}