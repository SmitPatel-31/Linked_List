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
int length(Node *head){
    if (head ==NULL){
        return 0;
    }
    return 1+length(head->next);
}

Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
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

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node *head=takeinput();
    
    int a=length(head);
    cout<<a<<endl;
    print(head);

}