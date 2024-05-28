#include<iostream>
#define sp " "
using namespace std;

class Demo{

    int x;
    protected:
        int y;
    public:
        static int count;
        int z;
    
    Demo(){
        x = 9;
        y = 10;
        count += 1;
    }

    Demo(int a, int b){
        this->x = a;
        this->y = b;
        z = 10;
    }
    
    void getNumbers(){
        cout<<x<<sp<<y<<endl;
    }

    static void output(string s){
        cout<<"The String is : "<<s<<endl;
    }

    const static void displayCount(){
            cout<<"Count : "<<count<<endl;
    }

};

int Demo::count;
static int classNumber = 10; 
//qu10



/*
int main()
{
    
    Demo  obj;
    obj.displayCount();
    Demo obj2, obj3;
    obj.getNumbers();
    obj.output("Rahul");
    // obj3.output("Bordoloi");
    obj3.displayCount();
    return 0;

}
*/
//ashrafulqu10

