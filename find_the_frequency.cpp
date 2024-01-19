/*Given a vector of N positive integers and an integer X. The task is to find the frequency of X in vector.
Input Format:
First line of input contains number of testcases T. For each testcase there will be three lines. First line of which contains N, 
size of vector. Second line contains N positive integers seperated by space, and third line contains X, whose frequency is required.
Output Format:
For each testcase, print the frequency of X.
User Task:
Your task is to complete the function findFrequency() which should count the frequency of X and return it.
Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= V[i] <= 1016
Example:
Input:
1
5
1 1 1 1 1
1
Output:
5
Explanation:
Testcase 1: Frequency of 1 is 5.
Link- https://practice.geeksforgeeks.org/problems/find-the-frequency/1          */

#include<bits/stdc++.h>

#define f(i,a,b) for(i=a;i<b;i++)
#define sp "\t"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

using namespace std;

main()
{
  
  int tc=0;
  cin>>tc;
  int n,x,i;
  vector<int> a;
  while(tc>0)
  {
    tc--;
    cin>>n;
    a.resize(n);
    f(i,0,n)
    {
      cin>>x;
      a.push_back(x);
    }
    cin>>x;
  }
  cout<<count(a.begin(),a.end(),x); 
  //vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 }; 
}