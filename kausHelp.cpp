#include<iostream>
using namespace std;

int binarySearch(int a[], int item, int low, int high) 
{ 
    if (high <= low) 
        return (item > a[low])?  (low + 1): low; 
    int mid = (low + high)/2; 
    if(item == a[mid]) 
        return mid+1; 
    if(item > a[mid]) 
        return binarySearch(a, item, mid+1, high); 
    return binarySearch(a, item, low, mid-1); 
} 
  
void insertionSort(int a[], int n) 
{ 
    int i, loc, j, k, selected; 
  
    for (i = 1; i < n; ++i) 
    { 
        j = i - 1; 
        selected = a[i]; 
        loc = binarySearch(a, selected, 0, j); 
        while (j >= loc) 
        { 
            a[j+1] = a[j]; 
            j--; 
        } 
        a[j+1] = selected; 
    } 
}

int* RearrangeArray(int *arr, int m){

    int i, temp[m], j = 1;

    if(m == 0){
        return;
    }
    else{
        for(int i = 0; i < m; i++){
            temp[i] = *(arr + i);
        }
        insertionSort(temp, m);
        for(i = m - 1; m <= 1; i--){
            *(arr + j) = temp[i];
        }
    }
    return arr;
}

int main()
{
    int arr[] {5,2,3,4,6,5,-2};
    int* resultArr = RearrangeArray(arr, 7);
    return 0;
}

