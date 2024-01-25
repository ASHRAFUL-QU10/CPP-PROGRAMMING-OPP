#include<iostream>
#define sp " "
using namespace std;

class Demo{

    int x, y;
    public:

        // Default Constructor
        Demo(){
            x = -1;
            y = -1;
        }

        // Paramterised Constructor
        Demo(int a, int b){
            this->x = a;
            this->y = b;
        }
/*
        // Copy Constructor
        Demo(Demo& obj){
            x = obj.x;
            y = obj.y;
        }
*/   
        void getNumbers(){
            cout<<x<<sp<<y<<endl;
        }

        Demo operator + (const Demo&);
        void print();
};

Demo Demo::operator +(const Demo& obj){
    Demo res;
    res.x = x + obj.x;
    res.y = y + obj.y;
    return res;
}

void Demo::print(){
    cout<<"x : "<<x<<","<<sp<<"y : "<<y;
}

int main()
{
    
    Demo obj(7, 8);
    obj.getNumbers();
    Demo obj2(10, 12);
    // Demo obj2(obj);
    obj2.getNumbers();
    Demo result = obj + obj2;
    result.print();

    return 0;
}


