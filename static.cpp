#include<iostream>

using namespace std;

/*
int staticNumber(){

    static int x;
    x++;
    return x;
}
*/

class staticNumbers{

    static int number;
    int A;
    
    public:
            // static float number;
            void changeNumber(){
                number++;
            }
            
            void setNumber(){
                A = ++number;
            }

            void getA(){
                cout<<"A : "<<A<<endl;
            }

            static void getNumber(){
                cout<<"Number : "<<number<<endl;
            }            
};

// float staticNumbers::number {7.007};
int staticNumbers::number {2};

int main()
{
    
    // Static Number
    /*
    cout<<staticNumber()<<endl;
    cout<<staticNumber()<<endl;
    */

    // Static Class Variable
    /*
    staticNumbers x1;
    staticNumbers x2;
    x1.number++;
    cout<<"1st Object : "<<x1.number<<"\n";
    cout<<"2nd Object : "<<x2.number;
    */

    // Static Class Method
    staticNumbers x1, x2;
    x1.setNumber();
    x2.setNumber();
    x1.setNumber();
    x1.getA();
    x2.getA();
    staticNumbers::getNumber();

    return 0;  
}