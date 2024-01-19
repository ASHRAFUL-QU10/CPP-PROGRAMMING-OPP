//rotate a matrix clockwise by 1

#include<iostream>
using namespace std;

int i,j;

void rotateM(int (*a)[10],int n, int m)
{
    int x=0,y=0,p,c; 
        if(x+1==n||y+1==m) 
            break;
        p =*(*(a+x+1)+y); 
        for(i=y;i<m;i++) 
        { 
            c=*(*(a+x)+i); 
            *(*(a+x)+i)=p; 
            p=c; 
        } 
        x++;
        for(i=x;i<n;i++) 
        { 
            c=*(*(a+i)+m-1); 
            *(*(a+i)+n-1)=p; 
            p=c; 
        } 
        m--; 
        if(x<n) 
        { 
            for(i=m-1;i>=y;i--) 
            { 
                c=*(*(a+n-1)+i); 
                *(*(a+n-1)+i)=p; 
                p=c; 
            } 
        } 
        n--; 
        if(y<m) 
        { 
            for(i=n-1;i>=x;i--) 
            { 
                c=*(*(a+i)+y); 
                *(*(a+i)+y)=p; 
                p=c; 
            } 
        } 
        y++; 
    if(x<n && y<m)
    {
        rotateM(&a[0],n,m);
    }
}

main()
{
    int a[10][10],n,m;
    cout<<"Enter no. of Rows and Columns:\n";
    cin>>n>>m;
    cout<<"\nEnter the Matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    rotateM(&a[0],n,m);
    cout<<"\nResultant Matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    } 
}