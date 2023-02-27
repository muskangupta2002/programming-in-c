#include<iostream>
#include<map>

using namespace std;

class Node{
public:
int data;
Node *next;
Node(int data){
    this->data= data;
    this->next=NULL;
}
~Node(){
    int value= this->data;
    if(this->next!=NULL){
        delete next;
        this->next=NULL;

    }
    cout<<"memory is freed for the vlaue"<< value;
}
};
void insertathead(Node* &head, int d){
Node* newnode= new Node(d);
newnode->next=head;
head= newnode;
}
void insertaattail(Node* &tail, int d){
    Node* newnode= new Node(d);
    tail->next= newnode;
    tail=newnode;
}
void printlist(Node* head){
    if(head==NULL){
        cout << "list is empty";
    }
    Node* temp= head;
    while(temp!=NULL){

        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<< endl; 
}
void insertAtPosition(Node* &head, int pos , int d){
    
    if(pos==1){
        insertathead(head, 7);
        return;
       


    }
    return insertAtPosition(head->next, pos-1, d);
    

}
Node* detectloop(Node* head){
    map<Node*, bool> visited;
    Node* temp= head;
    if(head==NULL){
        return NULL;
    }
    while(temp!=NULL){
    if(visited[temp]==true){
        return temp;}
        else{visited[temp]=true;}
        temp=temp->next;
    }
    return NULL;
}

Node* detectFLoyddLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slowptr = head;
    Node* fastptr = head;
    while(fastptr!=NULL){
        fastptr=fastptr->next->next;
        slowptr=slowptr->next;
        if(fastptr==slowptr){
            return slowptr;
        }
        
        
    }
    return NULL;
}
Node* floyydnode(Node* head){
    Node* meet=detectFLoyddLoop(head);
    Node* start=head;
    while(start!=meet){
        start=start->next;
        meet=meet->next;
    }
    return meet;
}
void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node* cyclenode= floyydnode(head);
    Node* temp=cyclenode->next;
    while(temp->next!=cyclenode){
        temp=temp->next;
    }
    temp->next=NULL;
    return;
}

bool iscircularlist(Node* head){
    if(head==NULL) return true;
    Node* temp= head->next;
    while(temp->next!=NULL){
        if(temp==head){
            printf("loop present");
            return true;
            break;
        }
        temp=temp->next;
    }
    return false;
}
Node* Sorting012(Node* &head){
    if(head==NULL)return head;
    Node* temp= head;
    int count0=0;
    int count1=0;
    int count2=0;
    while(temp!=NULL){
        if(temp->data==0){
            count0++;
        }
        else if(temp->data==){
            count1++;
        }
        else if(temp->data==2){
            count2++;
        }
        temp=temp->next;
    }
    Node* temp=NULL;

    


}
Node* sort012(Node* &head){
    Node*head0 =NULL;
    Node* head1= NULL;
    Node* head2=NULL;
     Node*temp0 =head0;
    Node* temp1= head1;
    Node* temp2=head2;
    Node* temp= head;
    
    while (temp!=NULL){
        if(temp->data==0){
            if(head0==NULL){
                head0=temp;
                Node* temporary=temp->next;
                
                temp->next=NULL;
                temp=temporary;
                temp0=head0;

            }
            else{
                
                Node* temporary=temp->next;
                temp->next=NULL;
                temp0->next=temp;
                temp=temporary;
                temp0=temp0->next;


            }
        }
        else if(temp->data==1){
            if(head0==NULL){
                head1=temp;
                Node* temporary=temp->next;
                
                temp->next=NULL;
                temp=temporary;
                temp1=head1;

            }
            else{
                
                Node* temporary=temp->next;
                temp->next=NULL;
                temp1->next=temp;
                temp=temporary;
                temp0=temp1->next;


            }
        }
        else if(temp->data==2){
            if(head2==NULL){
                head2=temp;
                Node* temporary=temp->next;
                
                temp->next=NULL;
                temp=temporary;
                temp2=head2;

            }
            else{
                
                Node* temporary=temp->next;
                temp->next=NULL;
                temp2->next=temp;
                temp=temporary;
                temp2=temp2->next;


            }
        }
      
    }
    temp0->next=head1;
    temp1->next=head2;
    head=head0;
return head0;
}


int main(){
 Node* head1= new Node(0);
 Node* tail1= head1;
 insertaattail(tail1, 2);
 insertaattail(tail1, 2);
 insertaattail(tail1, 1);
 insertaattail(tail1, 0);
 insertaattail(tail1, 0);
 insertaattail(tail1, 1);
 insertaattail(tail1, 2);
 insertaattail(tail1, 0);
 printlist(head1);

Node* jack=sort012(head1);
printlist(jack);

 printlist(head1);
    return 0;
    
}