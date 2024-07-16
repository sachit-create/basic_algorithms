#include <iostream> 
using namespace std;
// get max element of array through recursion.
int max_value(int arr[] , int n , int idx = 0){
    if(idx == n-1){
        return arr[idx];
    }
     return max(arr[idx] , max_value(arr , n , idx+1));

}
int main(){
    int arr[] = {1,2,5,3,9,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_value(arr,n);
    return 0;
}