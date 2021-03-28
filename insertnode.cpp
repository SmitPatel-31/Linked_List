#include iostream
uning namespace std;

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
    int data1;
    cin>>data1;
    Node *head=NUll;
    Node *tail=NULL;
    while (data!=-1)
    {
        Node *newNode= new Node(data);
        if(head!=NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data1;
        
    }
    return head;
    
}

void print (Node *head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}

int main(){
    Node *head = takeinput;
    int insertnode,data;
    cin>>insertnode;
    cin>>data;
    head=insertnode(head,insertnode,data)l
    print (head);
}