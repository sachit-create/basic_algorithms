#include <iostream>
#include <vector>
using namespace std;
// this code will rotate array from left side in d opertions. so time complexity is O(nd).
vector<int> array_left_rotate(vector <int> arr , int n , int d){
    int x =0;
    while(x<d){
       int temp = arr[0];
       for(int i=0 ; i<n-1 ; i++){
           arr[i] = arr[i+1];
       }
       arr[n-1] = temp;
       x++;
    }
    return arr;   
}

int main(){
    int n , d;
    cin >> n >> d;
    vector <int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    vector<int> arr2 =array_left_rotate(arr , n , d);

    for(int i=0 ; i<n ; i++){
        cout << arr2[i] << " ";
    }

    // optimized code is coming soon.
    return 0;
}