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

    head = new Node(1);
    second = new Node(2);
    third = new Node(3);
    fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    
    //count total number of nodes
    int count=0;
    Node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    //Move to (count /2)th node 
    int mid=count/2;

    temp = head;
    for(int i=1;i<mid;i++){
       temp = temp->next;
    }
    Node *newNode=new Node(99);
    newNode->next = temp->next;
    temp->next = newNode;
    
    //step 5:Print the linked list
    cout << "linked list after inserting in middle: ";

     temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
    return 0;
    
}