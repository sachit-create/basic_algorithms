#include <iostream>
// this code will iterate array elements through recursion.
using namespace std;

void  arrays_iteration_print(int arr[] , int n , int idx =0){
    if(idx < n){ 
       cout << arr[idx]<< " "; 
       arrays_iteration_print(arr,n, idx+1);    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    arrays_iteration_print(arr,n);
    return 0;
}