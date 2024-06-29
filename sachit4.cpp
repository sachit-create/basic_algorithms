#include <iostream>
#include <vector>
using namespace std;

int sumpart(vector <int> v , int n, int l , int r){
    int sum = 0;
    for(int i = l ; i<=r ; i++){
        sum = sum + v[i];
    }

    return sum;
}

int main(){
    cout << "Give size of array : " ;
    int n;
    cin >> n;

    vector <int> v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cout << "enter element no. " << i+1 << ": "; 
        cin >> ele ;
        v.push_back(ele);
    }

    int l;
    cout << "enter index  prefix : ";
    cin >> l;
    int r;
    cout << "enter index suffix : ";
    cin >> r;

    if(l<n && r<n && r>=0 && l>=0 ){
    cout << sumpart(v,n,l,r);
    }
    else cout << "range invalid";

    return 0;
}