#include<iostream>
// pascal's triangle by ncr formula. time complexity = O(n^2)
using namespace std;

int main(){
    for(int i = 0 ; i<6 ; i++){
        for(int l = 6-1 ; l>i ; l--){
            cout << " ";
        }
        int c = 1;
        for(int j = 1 ; j<=i+1 ; j++){
           cout << c << " ";
           c = c*( i+1 -j)/j;
        }
        cout << endl;
    }
 return 0;
}