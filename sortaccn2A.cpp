//sortaccn2A

#include <bits/stdc++.h> 
using namespace std; 

main()
{
    int a1[30],a2[30],n,m,i,j,na[30],x,y,temp[60],z;
    
    //1st array
    cout<<"Enter no. of Elements of the 1st Array:\n";
    cin>>n;
    cout<<"Enter the 1st Array:\n";
    for(i=0;i<n;i++) 
    {
        cin>>a1[i];
    }
    //2nd array
    cout<<"Enter no. of Elements of the 2nd Array:\n";
    cin>>m;
    cout<<"Enter the 2nd Array:\n";
    for(i=0;i<m;i++) 
    {
        cin>>a2[i];
    }

    //driver
    sort(a1, a1 + n);
    x=y=z=0;
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
           if(a2[i] == a1[j])
           {
               na[x]=a1[j];
               x++;
           }  
       }
    }
    sort(a2, a2 + m);
    for(i=0;i<n;i++)
    {
        if (binary_search(a2, a2 + m, a1[i])){}
        else
        {
            na[x]=a1[i];
            x++;
        }
    }
    
    //The Sorted Array
    cout<<"\nThe Sorted Array is:\n";
    for(i=0;i<n;i++)
    {
        cout<<na[i]<<"\t";
    }
}