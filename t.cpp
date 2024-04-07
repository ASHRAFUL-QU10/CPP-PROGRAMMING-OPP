#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(i=a;i<b;i++)
#define fr(i,a,b) for(i=a;i>=b;i--)
#define sp "\t"
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;


/*main(/*int argc, char **argv)
{
    //int i;
    //cout<<"You have entered "<<argc<<" arguments:"<<"\n"; 
    //f(i,0,argc) 
      //cout<<argv[i]<<"\n";   
    
    //return 0;
    /*int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    cout<<a<<sp<<b;*/

    //int a[]={1,2,9,2,4,5};
    //cout<<distance(a,max_element(a,a+6));
    
    /*int *x=new int[5];
    x[0]=10;
    x[1]=20;
    int size = *(&x + 1) - x;
    cout<<size;*/

    /*vector<int> a;
    double p=0,n=0,z=0;
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    a.push_back(-1);
    a.push_back(-1);*/
    /*for(auto i:a)
    {
      if(i>0)
      {
        p++;
      }
      else if(i<0)
      {
        n++;
      }
      else if(i==0)
      {
        z++;
      }
      //cout<<i<<sp;
    }
    double s=a.size();
    //double x=p/s;
    cout<<p/s<<sp<<n/s<<sp<<z/s;
    //double f=0.02000004;
    //cout << fixed << setprecision(5) << f <<endl; */
    /*sort(a.begin(),a.end());
    for(auto i:a)
      cout<<i;
*/
  //vector<int> a{ 3,2,1,3};
  /*a.push_back(3);
  a.push_back(2);
  a.push_back(1);
  a.push_back(3);*/
  /*sort(a.begin(),a.end());
  int l=a[a.size()-1];
  int x=count(a.begin(),a.end(),l);
  cout<<x;*/
  /*string s='07:05:45PM';
  int y=int(s[0]);
  cout<<y;*/
  /*int a[7]={};
  int i;
  f(i,0,7)  cout<<a[i];*/

  /*int n;
  cin>>n;
  vector<int> a;
  int x;
  for(auto i=0;i<n;i++)
  {
    cin>>x;
    a.push_back(x);
  }
  sort(a.begin(),a.end());
  for(auto i:a)
  {
    cout<<i<<" ";
  }*/
  /*int i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);*/
  /*int x=0,flag=0;
  for(int i=0;i<5;i++)
  {
    cout<<i<<" ";
    flag=0;
    if(x==0 && flag==0)   cout<<"Fuck Off";x++;flag=1;*/
    /*for(int i=7;i!=0;i--)
    {
      cout<<i--;
    }*/
  /*int a[6]={12,43,-1,42,12,53};
  int i=0,n=6,x=5;
  while(i<n)
  {
    cout<<*max_element(a,a+x-1);
    i=x;
  }*/
  /*cout<<"Hello";
  int i=0;
  cout<<(i=0?1:2?3:4);
  char p;
  char buf[10]={1,2,3,4,5,6,9,8};
  p=(buf + 1)[5];
  cout<<(int)p;
}*/

main()//int argc, char **argv)
{
  /*int i,a[argc];
  //f(i,0,argc)
  //{
    //a[i]=int(argv[i+1]);
  //}
  i=0;
  for(int x=1;x<=argc;x++)
  {
    a[i++]=atoi(argv[x+1]);
  }
  //sort(a,a+argc-1);
  //cout<<a[argc-1]<<" "<<a[argc-2];
  for(auto x:a)  cout<<x<<" ";*/
  int a[]={12,14,15,23,45};
  printf("%u,%u\n",a,&a);
}
