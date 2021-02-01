// Simple linkedlist

// print simple linked list...


#include<iostream>
using namespace std;



class Node{
    public:

    int data;
    Node *next;

    Node(int data){
        this ->data=data;
        next = NULL;
    }
};

void print(Node *head){
    while (head!=NULL)
    {
        cout<<head -> data<<"   ";
        head=head->next;
    }
    
}

int main(){
    Node n1(5);
    Node *head=&n1;
    Node n2(7);
    Node n3(13);
    Node n4(33);
    Node n5(78);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);
}
