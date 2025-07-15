#include <iostream>
using namespace std;
// for sorted linked list only.
class Node{
   public:
     int value;
     Node* next;

     Node(int val){
        value = val;
        next = NULL;
     }
};

class LinkedList{
   public:
      Node* head;
      LinkedList(){
        head = NULL;
      }

      void insert(int val){
         Node* newn = new Node(val);
         newn->next = head;
         head = newn;
      }

     void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->value << " --- ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
     } 

    void dlt_dupli(){
        Node* current = head;
        while(current){
            while(current->next && current->value == current->next->value){
               Node * temp = current->next;
               current->next = current->next->next;
               delete temp;
            }current = current->next;
         }
    }

    void rev(Node * head){
        if(head == NULL){ 
           return;
        }
        rev(head->next);
        cout << head->value << " --- ";
    }
};

int main(){
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(5);
    ll.insert(5);
    ll.insert(6);
    ll.insert(6);
   // ll.insert(6);
    ll.display();
    ll.rev(ll.head);
    return 0;
}