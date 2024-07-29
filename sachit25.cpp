#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
// this code will shift all the zeros to the end of the array.
void zerostoend(int *arr , int n){
   
   for(int i = 0 ; i<n-1; i++){
    bool flag = false;
      for(int j = 0 ; j<n-1-i ; j++){
        if(arr[j] == 0){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            flag = true;
        }
      }
      if(!flag) break;
   }
   return;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
zerostoend(arr , n);

for(int i=0; i<n ; i++){
    cout << arr[i] << " ";
}
   
    return 0;
}