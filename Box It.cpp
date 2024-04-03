/*
QU10
Design a class named Box whose dimensions are integers and private to the class. The dimensions are labeled: length, breadth, and height.

The default constructor of the class should initialize, and  to.

The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  to length, breadth, and height.

The copy constructor BoxBox ) should set  and  to 's  and, respectively.

Apart from the above, the class should have  the following functions:

int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box
Overload the operator  for the class Box. Box   Box  if:

 < 
 <  and ==
 <  and == and ==
Overload operator  for the class Box(). 
If  it is an object of class Box:

 should print,  and  on a single line separated by spaces.

Constraints

 
Two boxes being compared using the  operator will not have all three dimensions equal.
*/

#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box 
{
    int l,b,h;
    
    public:
    Box()
    {
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }
    Box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(const Box &x)
    {
        this->l = x.l;
        this->b = x.b;
        this->h = x.h;
    }
    int getLength(){ return this->l; }
    int getBreadth(){ return this->b; }
    int getHeight(){ return this->h; }
    long long CalculateVolume(){ return (long long)(this->l * this->b * this->h); }

    bool operator<(Box &x) 
    {
        if (l < x.l) return true;
        else if (l == x.l) 
        {
            if (b < x.b) return true;
            else if (b == x.b)    
                if (h < x.h)   return true;
        }
        return false;
    }
};

ostream &operator<<(ostream &out, Box &x) 
{
    out<<x.getLength()<<" "<<x.getBreadth()<<" "<<x.getHeight();
    return out;     
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
//ashrafulqu10 



