#include<iostream>
using namespace std;
//Efficient code for finding target differnce. Time compl3exity O(n).
int main(){
    int arr[] = {1,2,3,4,5};
    int target = 6;
    int i = 0;
    int j = sizeof(arr)/sizeof(arr[0])-1;
    int pair = 0;
    while(i<j){
        if(arr[j] - arr[i] == target){
            pair++;
            break;
        }
        else if(arr[j] - arr[i] > target){
             j--;
        }
        else i++;  
     }
     if( pair == 1){
        cout << "yes";
     }
     else cout << "no";
     

    return 0;
}