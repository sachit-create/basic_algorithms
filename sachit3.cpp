#include<iostream>
 using namespace std;
// this code will merge 2 sorted array(if not then sort them) into 3 merging array.
// time complexity O((n1 + n2)^2)
 void array_merge(int arr1[],int arr2[], int merge[],int n1 , int n2){
      int i;
      int n3 = n1 + n2;
      for(i = 0 ; i<n1 ; i++){
          merge[i] = arr1[i];
      } 
      for(int j = 0 ; j<n2 ; j++,i++){
          merge[i] = arr2[j]; 
      }   
      for(int k = 0 ; k<n3-1 ; k++){
         for(int j = k+1 ; j<n3 ; j++){
           if(merge[k]>merge[j]){
            int temp = merge[k];
            merge[k] = merge[j];
            merge[j] = temp;
          }
        }
      }
   }
int main(){

   int arr1[] = {1,2,3,4};
   int arr2[] = {8,7,6,5};
   int n1 = sizeof(arr1)/sizeof(arr1[0]);
   int n2 = sizeof(arr2)/sizeof(arr2[0]);
   int merge[n1 + n2];
   int n3 = n1 + n2;

   array_merge(arr1,arr2,merge,n1,n2);
    
   for(int i = 0 ; i< n3 ; i++){
      cout << merge[i] << " ";
   }

  return 0;
}