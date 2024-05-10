#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(auto i=a;i<b;i++)
#define fi(i,a,b,x) for(auto i=a;i<b;i=i+x)
#define fe(i,a,b) for(auto i=a;i<=b;i++)
#define fr(i,a,b) for(auto i=a;i>=b;i--)
#define loop(it, a) for(auto it=a.begin();it!=a.end();it++)
#define endl '\n'
#define sp '\t'
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define mod 1000000007
#define PI 3.1415926535897932384626
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x, y) cout<<#x<<" = "<<x<<","<<#y<<" = "<<y<<endl

using namespace std;

template <typename T>
void print(vector<T>& a, char sep)
{
    for(auto i : a) { cout<<i<<sep; }
}

ll mod_opr(ll num)
{
    return (num + mod) % mod;
}

template <typename T>
bool compare(T x, T y)
{
    return x > y ? true : false;
}

bool pair_Compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second < b.second;
}

int main()
{

    fast;
	

    // Sum of a Vector

    /*
    vector<ll> x {1,2,3,4,5};
    cout<<accumulate(x.begin(), x.end(), 0);    // 0 -> Initial Value of Sum
    */

    // Code to Remove Spaces in Between

    /*
    string s = "R  ah u l Bord     color";
    cout<<s<<endl;
    // Method 1
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
    // Method 2
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout<<s;
    */

    // Append Repeatation of a String by its Frequency
   
    /*
    string s = "R7h9L5"; 
    string answer;
    fi(i, 0, s.size(), 2){
       answer.insert(answer.end(), (int)(s[i + 1] - '0'), s[i]);
    }
    cout<<z;
    */

    // Multiplying a Scaler to the Whole Vector [Using Lambda Function]

    /*
    vector<ll> array {1, 2, 3, 4, 5};
    ll constant{300};
    transform(array.begin(), array.end(), array.begin(), [&constant](auto& c) {return c * constant;} );
    print(array, sp);
    */

    // Left Rotation of a Vector
    
    /*
    vector<ll> vect {1,2,3,4,5};
    int leftRotation = 2;
    rotate(vect.begin(), vect.begin() + leftRotation, vect.end());
    print(vect, sp);
    */

    // Right Rotation of a Vector

    /*   
    vector<ll> vect {1,2,3,4,5};
    int rightRotation = 2;
    rotate(vect.begin(), vect.begin() + vect.size() - rightRotation, vect.end());
    print(vect, sp);
    */

    // Slicing a Vector -> https://www.geeksforgeeks.org/slicing-a-vector-in-c/?ref=leftbar-rightbar
    /*
    vector<int> vect {1,2,3,4,5,6,7};
    int x  = 2, y = 5;
    vector<int> answer;
    answer = vect[slice(x, y - x + 1, 1)];
    for(auto i : answer){
        cout<<i<<" ";
    }
    */

    // Erase the Duplicate Occurrences in Sorted Vector
    
    /*
    vector<ll> vect {9,10,3,1,2,3,4,5,5,5,6,7};
    vect.erase(unique(vect.begin(), vect.end()), vect.end()); 
    print(vect, sp);
    */

    // Intersection of Two Vectors

    /*
    vector<ll> a{1,2,3,3,4,9}, b{7,3,9,1,0}, intersection;
    unordered_set<ll> set(a.begin(), a.end());
    for(auto i : b){
        if(set.erase(i) > 0){
            intersection.pb(i);
        }
    }
    print(intersection, sp);
    */

    // Memeset

    /*
    int a[5];
    memset(a, 0, sizeof(a));
    f(i,0,5){
        cout<<a[i]<<" ";
    }
    */

    // Iota Algorithm

    /*
    int a[5] ={0};
    char c[3] = {0};

    iota(a, a+5, 10);
    iota(c, c+3, 'a');
    f(i,0,5){ cout<<a[i]<<" "; }
    std::cout.write(c, 3);
    */

    // Copy Elements from one container to other

    /*
    int source[5] = {1,2,3,4,5};
    int target[5];
    copy_n(source, 5, target);
    f(i,0,5){ cout<<target[i]<<" "; }
    */

    // Calculate the Number of Digits of a Number

    /*
    int x = 345;
    cout<<floor(log10(x)) + 1;
    */

    // GCD of a Number

    //cout<<__gcd(50, 10);

    // Swap Two Numbers w/o using a 3rd

    /*
    ll a = 7, b = 6;
    deb2(a,b);
    a ^= b; 
    b ^= a; 
    a ^= b;
    deb2(a,b);
    */

    // Fast Multiplication

    /*
    ll n = 16;
    cout<<(n>>1)<<endl; // Divide by (2^n), here n = 1 
    cout<<(n<<1)<<endl; // Multiply by (2^n), here n = 1
    */

    // Even or Odd using Bitwise Operators
    
    /*
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    if((x&1) == 0)    cout<<"Even"<<endl;
    else    cout<<"Odd";
    cout<<endl;
    */

    // Integer Vector to String
    
    /*
    vector<int> arr{1,2,3,4,5,6};
	std::stringstream newstr;
	for(auto value: arr){ newstr<<value; }
	string result = newstr.str();
	cout<<result;
    */

    // Split a String into Vectors

    /*
    string s = "Rahul Bordoloi    King";
    vector<string> result;
    istringstream iss(s);
    for(string s; iss>>s; ){ result.push_back(s); }
	print(result, sp);
    */

    // Slicing a String in C++

    /*
    string s = "Rahul Bordoloi";
    cout<<s.substr(6)<<endl;
    cout<<s.substr(3, 9)<<endl;
    */
    
    // Max Occuring Element in a C++ Map.

    /*
    map<int, int> Map;
    Map[100] = 7;
    Map[200] = 9;
    Map[300] = 1;

    cout<<"Key : "<<max_element(Map.begin(), Map.end(), pair_Compare)->ff<<endl;
    cout<<"Value : "<<max_element(Map.begin(), Map.end(), pair_Compare)->ss<<endl;
    */

    // Convert a Decimal into Binary in C++
    
    
    int n;
    cin>>n;
    string binary = bitset<8>(n).to_string();
    cout<<"Raw Binary String : "<<binary<<endl;
    // Finding the First Occurence of '1' to Strip-Off Leading Zeroes.
    const static auto loc1 = binary.find('1');            
    if(loc1 != string::npos) 
        cout<<"Stripping : "<<binary.substr(loc1)<<endl;
    cout<<"Integer : "<<stoi(binary)<<endl;
    

    // Check out the Datatype of a Variable in C++

    /*
    int x = 8;
    cout<<"Integer : "<<typeid(x).name()<<endl;
    cout<<"Float : "<<typeid((float)x).name()<<endl;
    cout<<"Long Long : "<<typeid((ll)x).name()<<endl;
    cout<<"Double : "<<typeid((double)x).name()<<endl;
    cout<<"Short : "<<typeid((short)x).name()<<endl;
    cout<<"Char : "<<typeid((char)x).name()<<endl;
    cout<<"String : "<<typeid(to_string(x)).name()<<endl;
    */
	
    
    cerr<<"TIME : "<<(float)clock() / CLOCKS_PER_SEC<<" seconds"<<endl;
    return 0;
}

//ashrafulqu10
