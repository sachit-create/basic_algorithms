// Give code will return you nth Fibonnaci number.
#include<iostream>

using namespace std;

int fibo(int n){
     if(n==0 or n==1) return n;
     return fibo(n-1) + fibo(n-2);
}

int main(){
    int n=6;
    cout << fibo(n);
    return 0;
}