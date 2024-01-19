/*Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.
Digits from 1-9 and digits can't repeat.
Input:
The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is a string, which contains only I's and D's in capital letter.
Output:
Print the minimum number following that pattern.
Constraints:
1 ≤ T ≤ 100
1 ≤ Length of String ≤ 8
Example:
Input-
5
D
I
DD
IIDDD
DDIDDIID
Output-
21
12
321
126543
321654798
Link- https://practice.geeksforgeeks.org/problems/number-following-a-pattern/0  */

#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>b;i--)
#define sp "\t"

using namespace std;

int num[9]={1,2,3,4,5,6,7,8,9};
int x=0,y=1,i=0,j=1;                                         //x==low , y==max
char s[8];

void task(int a[9])
{
    //cout<<"\nInside While!\n";
    if(s[i]=='I')
    {
        a[++i]=num[y++];                            //direct input/increment at the end
    }
    else if(s[i]=='D')
    {
        int m=distance(a,max_element(a,a+i));      //std::cout << std::distance(sampleArray.begin(), std::max_element(sampleArray.begin(), sampleArray.end()))
        fr(j,i+1,m)                            //shifting elements towards right
            a[j]=a[j-1];
        a[m]=num[y++];                         //insert at maximum of the whole array towards left
        i++;
    }
}

main() 
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cin>>s;                                        //getline(cin,s);
        int l=strlen(s);
        int z=l+1;
        int *a=new int[z];
        if(s[0]=='I')                                  //1st element irrespective of the size
        {        
            a[i++]=num[x++];
            a[i]=num[y++];
        }
        else if(s[0]=='D')                             //1st element irrespective of the size
        {
            a[i++]=num[y++];
            a[i]=num[x++];
        }
        if(l==1)
        {
            cout<<a[0]<<a[1]<<"\n";
            delete[] a;
            exit(0);
        }
        else
        {
            f(j,1,l)
                task(a);
            f(i,0,z)
                cout<<a[i];        
        }
        delete[] a; 
    }
}