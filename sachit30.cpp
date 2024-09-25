#include <iostream> 
using namespace std;
// give the sqrt of any integer using binary search.(non recursive)
int binary_modified(int t){
    // time complexity O(logt).
    int l = 0;
    int r = t;
    int ans = -1;
    while(l<=r){
        int mid = l + (r-l)/2;
        
        if(mid*mid <= t){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return ans;
}

int main(){
    int t;
    cout << "enter a value to get it's square root : ";
    cin >> t;
    cout << binary_modified(t);
    return 0;
}