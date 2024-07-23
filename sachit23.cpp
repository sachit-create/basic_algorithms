#include <iostream>
using namespace std;

void steps(int n , char a, char b, char c){
    if(n==0) return;
    steps(n-1,a,c,b);
    cout << a << "->" << c << endl;
    steps(n-1,b,a,c);
    return;
}

int main(){
    int n;
    cin >> n;
    steps(n , 'a' ,'b' , 'c');
    return 0;
}