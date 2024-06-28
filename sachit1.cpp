//  this code will sort o on left side and ones on right side of the array.
#include<iostream>

using namespace std;

int main(){
   int arr[6] = {1,0,1,1,0,1};
   for(int i=0 ; i<6-1; i++){
      for(int j = i+1 ; j<6; j++){
         if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   for(int i = 0 ; i<6 ; i++){
     cout << arr[i];
   }
   return 0;
}