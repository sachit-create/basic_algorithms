#include <iostream>
#include <string>

using namespace std;
 struct test
{
   int cost;
   char name[15];
} ;


int main(){
    struct test price;
    price.cost = 80;
    cin >> price.name;
    cout << price.name;
    cin >> price.cost;
    cout << price.cost;
    return 0;
}