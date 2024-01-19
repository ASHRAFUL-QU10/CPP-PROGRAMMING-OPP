#include<iostream>
#include<conio.h>
using namespace std;
main()
{
 int a[5][20],n,m,i,j;
 cout<<"Enter no. of Rows and Columns:";
 cin>>n>>m;
 cout<<"Enter Matrix:";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   cin>>a[i][j];
  }
 }
 int w,x,y,z;
 w=0;         //rows
 x=0;
 y=n-1;       //rows
 z=m-1;
 for(i=w;i<=y;i++)           //upper & lower row
 {
  a[x][i]*=2;
  a[z][i]*=2;
 }
 for(i=w+1;i<y-1;i++)     //side columns
 {
  a[i][x]*=2;
  a[i][z]*=2;
 }
 cout<<"Matrix Output:\n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   cout<<a[i][j]<<"\t";
  }
  cout<<"\n";
 }
 getch();
}
