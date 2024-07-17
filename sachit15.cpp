#include <iostream>
using namespace std;
// this code will return a string without occurence of a chracter you pass in it.
string func(string &str , int n , int idx = 0){
       if(idx == n) return " ";
       string str2 = " ";
       str2 += str[idx];
       return ((str[idx] == 'a') ? " " : str2) + func(str , n , idx+1);
}

int main(){
    string str= "abcad";
    int n = 5;
    cout << func(str,n); 
    return 0;
}