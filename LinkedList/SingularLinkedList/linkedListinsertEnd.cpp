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
    Node *head,*second,*third,*fourth;

    head = new Node(10);
    second = new Node(10);
    third = new Node(10);
    fourth = new Node(10);

    head = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    //Insert New Node at the end
    Node *NewNode = new Node(88);

    //traverse to last node
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    // Link last node to new node
    temp->next = NewNode;

    //print the list
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
    return 0;
}