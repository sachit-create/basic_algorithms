#include <iostream>
using namespace std;
// this code will print a series for k multiple of n.
void func(int n , int k , int i = 1){
    if(i <= k){
        cout << n*i << " , ";
        func(n , k , i+1);
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    func(n,k);
    return 0;
}