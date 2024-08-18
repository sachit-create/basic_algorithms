#include <iostream>
using namespace std;

class node{
  public:
    int value;
    node *next;

    node(int data){
        value = data;
        next = NULL;
    }

    node(int data, node *n){
        value = data;
        next = NULL;
        n->next = this; // Correctly links the previous node to the new node
    }
    
};

int main(){
    node*n = new node(2);
    node*n1 = new node(3,n);
    node*n2 = new node(4,n1);
    cout << n->value << " " << n->next->value << " --- ";  
    cout << n1->value << " " << n1->next->value << " --- ";
    cout << n2->value << " " << n2->next << endl;
    return 0;
}