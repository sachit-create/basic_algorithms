#include <iostream>
using namespace std;

int binary_search(int *arr  , int t , int l , int r){
    if(l>r) return -1;
    int mid = (l+r)/2;
    if(arr[mid] == t){
        return mid;
    }
    else if(arr[mid]>t){
        return binary_search(arr,t,l,mid-1);
    }
    else{
        return binary_search(arr,t,mid+1,r); 
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cin >> target;

    cout << binary_search(arr,target,0,n-1) << endl;
    return 0;
}