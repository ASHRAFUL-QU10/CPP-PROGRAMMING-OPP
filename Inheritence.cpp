#include<iostream>
#include "Class.cpp"
#define sp " "
#define endl "\n"
using namespace std;

class Inheritence : private Demo{

    private:
        int id;
    protected:
        const string s {"Rahul"};
    public:
        Inheritence(int a, int b, int id) : Demo(a, b) {
            this->id = id;
        }

        void getValue(){
            // Demo::getNumbers();
            cout<<"From Base Class : "<<y<<sp<<z<<endl;
            cout<<id<<endl;
            cout<<this->getString()<<endl;
        }

        string getString(){
            return this->s;
        }
        const static void output(){
            cout<<"Program coded by Rahul Bordoloi."<<endl;
        }
};

int extern classNumber;

int main()
{
    /*
    Demo obj;
    obj.displayCount();
    Demo obj2, obj3;
    obj.getNumbers();
    obj.output("Rahul");
    // obj3.output("Bordoloi");
    obj3.displayCount();
    */

    Inheritence obj(7,8,9);
    obj.getValue();
    Demo::output("Hehehehahahaohoho");
    cout<<classNumber<<endl;
    Inheritence::output();
    return 0;

}