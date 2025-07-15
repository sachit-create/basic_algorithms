#include <iostream>
#include <vector>
using namespace std;
// this code will give you the all subsequences present in a string.
void subsequences(string &str,int idx ,string result, vector<string> &str1 ){
     if(idx == str.size()){
        str1.push_back(result);
        return;
     }
    subsequences(str , idx+1 , result + str[idx] , str1);
    subsequences(str , idx+1  , result , str1);
}

int main(){
    string str = "abc";
    vector<string> str1;
    subsequences(str,0 , "",str1);
    for(int i = 0; i<str1.size() ; i++){
        cout << str1[i] << " ";
    }
    return 0;
}