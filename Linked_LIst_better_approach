// linked List better approch
// previous approch time complexity is n^2
// and from using tain this problem complexityh is n...

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail = NULL;
    while (data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            // here first node next value set and given to tail next value...
            tail->next=newNode;
            tail=tail->next;
            }
            cin>>data;
        }
        return head;
    }

void print(Node *head){
    while(head != NULL){
        cout<<head ->data<<" ";
        head=head->next;
    }
}


int main(){
    Node *head=takeinput();
    print(head);
}
