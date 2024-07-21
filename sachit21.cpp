#include <iostream>
using namespace std;
// x is present in array or not through recursion.
bool x_present(int arr[] , int n , int x , int idx = 0){
    if(idx == n) return false;
    return (arr[idx] == x) || x_present(arr , n , x , idx+1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    while(i<n) {
       cin >> arr[i];
       i++;
    }
    int x;
    cin >> x;
    if(x_present(arr , n , x)) cout << "yes" << endl;
    else cout << "no";

    return 0;
}