#include<iostream>
using namespace std;

int i;

void ThanosS(int a[],int n)
{
    int c=1,flag=0,j;
    if(n >= 1)
    {
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(a[i] <= a[j])
                {
                    c++;
                }
                else
                {
                    flag=1;
                    n/=2;
                    break;
                }
            }
        }
    }
    if(flag==1 && n > 1)
    {
        ThanosS(a,n);
    }
    cout<<"\n"<<c;
}

bool isPower(int x, long int y) 
{ 
    if (x == 1) 
        return (y == 1); 
    long int pow = 1; 
    while (pow < y) 
        pow *= x;
    return (pow == y); 
} 
/*bool isPower(int x, int y) 
{ 
    // logarithm function to calculate value 
    int res1 = log(y) / log(x); 
    double res2 = log(y) / log(x); // Note : this is double 
  
    // compare to the result1 or result2 both are equal 
    return (res1 == res2); 
}*/ 

main()
{
    int a[100],n,x;
    cin>>n;
    x=isPower(2,n);
    if(x==1)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ThanosS(a,n);
        /*for(i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }*/
    }
    /*else
    {
        cout<<"\nNo. of Elements are not in an order of 2\n";
    }*/
    
}