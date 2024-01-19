#include<iostream>
#define endl "\n"
using namespace std;

int main()
{

    int x, count = 0;
    // cin.ignore();
    while(true){
        string input = "";
        getline(cin, input);
        if(input == "")
            break;
        x = stoi(input);
        count++;
        //cout<<"Entered X : "<<x<<endl;
    }
    cout<<"Input Counts : "<<count<<endl;
    return 0;
    
}