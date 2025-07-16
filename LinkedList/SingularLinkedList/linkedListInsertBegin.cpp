#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node *next;

    //Creat a constructor ,constructor to set data and next
    Node(int value){
        data = value;
        next = nullptr;
    }
};


int main() {
    Node *head,*second,*third;
    head = new Node(29);
    second = new Node(20);
    third = new Node(21);

    head->next = second ;
    second->next = third;
    // third->next = nullptr;
    
    Node *newFirst = new Node(10);
    newFirst->next = head;
    head = newFirst;

    Node *current = head ;

    while (current!=nullptr)
    {
        /* code */
        cout << current->data <<" " ;
        current = current->next;
    }
    
  return 0;
  
}