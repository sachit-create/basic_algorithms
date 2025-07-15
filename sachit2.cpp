#include<iostream>
using namespace std;
const int MAX_SIZE = 100;
int main(){
    int arr[MAX_SIZE] = {1,2,3,4,5};
    int n = 5;
    int valuetodlt = 4;

    int pos = -1;
    for(int i=0 ; i<n ;  i++){
        if(arr[i] == valuetodlt){
            pos = i;
            break;
        }
    }

    if(pos != -1){
      for(int i=pos; i<n-1; i++){
        arr[i] = arr[i+1];
      }
      n--;
    }
    

    for(int i = 0 ; i<n ; i++){
        cout  << arr[i] << " ";
    }
    return 0;
}