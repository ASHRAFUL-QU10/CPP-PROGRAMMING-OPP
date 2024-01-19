#include <iostream>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define sp "\t"

using namespace std;

main()
{
   int n=259;
   unsigned char c=n;
   char a,b,x;
   a=n>>8; 
   b=n>>16;
   x=n>>24;
   cout<<(int)c<<sp<<(int)a<<sp<<(int)b<<sp<<(int)x<<sp;
   int m,y,z,k;
   m=c;
   y=a<<8;
   z=b<<16;
   k=x<<24;
   int res=m|y|z|k;
   cout<<"\nResult="<<res;
}