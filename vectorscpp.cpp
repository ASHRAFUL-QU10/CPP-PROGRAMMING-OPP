/*Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. 
Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. 
In vectors, data is inserted at the end. Inserting at the end takes differential time, 
as sometimes there may be a need of extending the array. 
Removing the last element takes only constant time because no resizing happens. 
Inserting and erasing at the beginning or in the middle is linear in time.
Certain functions associated with the vector are:
Iterators-
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
Capacity-
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.
Element access-
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
Modifiers-
assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
Link: https://www.geeksforgeeks.org/vector-in-cpp-stl/    */

#include<bits/stdc++.h>
#include<vector>

#define f(i,a,b) for(i=a;i<b;i++)
#define sp "\t"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

using namespace std;

main()
{
    vector<int> a;
    int i,x;
    f(i,0,5)
    {
        cin>>x;
        a.push_back(x);
    }
    //a.assign(5,10);
    for(i=a.begin();i<a.end();i++)
    {
        cout<<a[i];
    }
}
//ashrafulqu10
