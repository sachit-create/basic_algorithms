#include <iostream>
#include <vector>
using namespace std;
// this code will rotate array from left side in d opertions. so time complexity is O(nd).
array_left_rotate(vector <int> arr , int n , int d){
    int x = 0;
    while(x++<d){
       int temp = arr[0];
       for(int i=0 ; i<n-1 ; i++){
           arr[i] = arr[i+1];
       }
       arr[n-1] = temp;
    }
    return arr;   
}

int main(){
    int n , d;
    cout << "Enter arrays size : ";
    cin >> n;
    cout << "Rotation count : ";
    cin >> d;
    vector <int> arr(n);
    // Taking input
    while(n-->0){
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    // calling function for rotation d times.
    array_left_rotate(arr , n , d);

    // printing rotated array.
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    //optimized code using reverse and % operator.
    return 0;
}
