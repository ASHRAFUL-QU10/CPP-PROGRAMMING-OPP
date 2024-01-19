#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cout<<"Enter your Number : ";
    cin>>x;
    try{
        if(x < 0)
        {
            throw x;
            cout<<"No Error!\n";
        }
    }   
    catch(int x){
        cout<<"Exception Caught "<<x;
    }
    catch(...){
        cout<<"Default Exception\n";
    }
    cout<<"End of Program";

    return 0;
}