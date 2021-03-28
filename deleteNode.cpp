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

Node *inputd(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;

    while(data!=-1){
        
        Node *newnodew = new Node(data);
        if(head==NULL){
            head=newnodew;
            tail=newnodew;

        }
        else{
            tail->next=newnodew;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}


void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node *insert(Node *head,int i){
    int count=0;
    Node *temp=head;
    if(i==0){
        head=head->next;
        return head;
    }
    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count=count+1;
    }
    if(temp!=NULL){
        temp->next=temp->next->next;
        }

    return head;    



}

int main(){
    
    Node *head=inputd();
    int data,i;
    cin>>i;
    head=insert(head,i);
    print(head);
}