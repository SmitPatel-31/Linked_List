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

Node *etinput(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail=NULL;
    while( data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
Node *reverse(Node *head){
    Node *curr=head;
    Node *past=NULL;
    Node *nextN=head;
    while(nextN!=NULL){
        nextN=nextN->next;
        curr->next=past;
        past=curr;
        curr=nextN;
    }
    head=past;
    return head;
}
void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node *head=etinput();
    head=reverse(head);
    print(head);
}