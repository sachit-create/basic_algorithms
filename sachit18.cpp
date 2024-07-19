#include <iostream>
using namespace std;
int hcf(int a , int b){
    if(b == 0){
        return a;
    }
    return hcf(b , a%b);
    
}
int main(){
    int a;
    int b;
    cin >> a >> b;
    if(a==0 && b==0){
        cout << "not defined";
        return 0;
    }
    else if(a==0 || b == 0){
        cout << max(a,b);
        return 0;
    }
    else {
    cout << hcf(a,b);
    }
    return 0;
}