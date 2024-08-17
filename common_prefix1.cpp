#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// common prefix in all strings check and print by this code.
// time complexity O(nlogn*n). n is the length of strings.
string common_prefix(vector<string> &str){
    sort(str.begin(), str.end());

    string s1 = str[0];
    int i=0;
    string s2 = str[str.size()-1];
    int j=0;

    string ans="";
    while(i<s1.size() && j<s2.size()){
        if(s1[i] == s2[j]){
            ans+=s1[i];
            i++;j++;
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<string> str(n);
    for(int i=0 ;  i<n ; i++){
        cin >> str[i];
    }

    cout << common_prefix(str) << endl;
    return 0;
}