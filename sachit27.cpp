#include <iostream>
using namespace std;

class calculator{
    public:
       int a,b;
       float c,d;
       void choice(int n){
        switch (n) {
          
          case 1:
            cin >> a >> b;
            cout << "sum is : " << a+b << "\n\n";
            break;
        
         case 2:
            cin >> a >> b;
            cout << "sum is : " << a-b << "\n\n";
            break;

         case 3:
            cin >> a >> b;
            cout << "sum is : " << a*b << "\n\n";
            break;
        
         case 4:
            cin >> c >> d;
            cout << "sum is : " << c/d << "\n\n";
            break;

         default : 
            cout << "invalid option" << "\n\n";
            
       }
    }
};

int main(){
    calculator key;

     do{
        cout << "select any one :" << "\n\n";
        cout << "  addition    : 1" << endl;
        cout << "  subtraction : 2" << endl;
        cout << "  multiply    : 3" << endl;
        cout << "  divide      : 4" << endl;
        cout << "  exit        : 5" << "\n\n";
        int n;
        cout << "enter a value :";
        cin >> n;
        if(n==5){
             break;
        }
        else {
            key.choice(n);
        }
     }while(true);

    return 0;
}