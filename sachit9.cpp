#include<iostream>
#include<vector>

using namespace std;
// this code is for absolute difference of matrix diagnol. ltor and rtol.

int diagonalDifference(vector<vector<int>> arr) {
     int n = arr.size();
     int ltor =0;
     int rtol =0;
     for(int i =0 ; i<n ; i++){
         rtol += arr[i][n-1-i];
         for(int j=n-1; j>=0 ; j--){
             if(i==j){
                 ltor+=arr[i][j];
             }
            
         }
     }
     if(ltor < rtol){
        return (ltor - rtol)*-1;
     }
     return ltor - rtol;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int> (n));
    for(int i = 0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
           cin >> arr[i][j];
        } 
    }
    int diff = 0;
    diff = diagonalDifference(arr);
    cout << diff;
    return 0;
}