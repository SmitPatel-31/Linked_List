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
Node *reverse(Node *head,int k){
    Node *temp=head;
    int count=1;
    while(head->next!=NULL){
        head=head->next;
        
    }
    head->next=temp;

    while(count<k){
        temp=temp->next;
        count=count+1;
    }
    
    head=temp->next;
    temp->next=NULL;

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
    int data;
    cin>>data;
    head=reverse(head,data);
    print(head);
}