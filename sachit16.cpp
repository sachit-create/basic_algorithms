#include <iostream>
using namespace std;
//this code will check a number is palindrome or not through recursion.way =2.
bool func(int n , int *temp){
    if(n>=0 and n<=9){
        int lastdigitoftemp = (*temp)%10;
        (*temp) /= 10;
        return (n== lastdigitoftemp);
    }
    bool result = (func(n/10 , temp) and (n%10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}
int main(){
    int n;
    cin >> n;
    int anothern = n;
    int *temp = &anothern;
    cout << func(n , temp);
    return 0;
}