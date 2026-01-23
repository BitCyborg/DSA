#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};


int main(){
    //1st node
    Node* first = new Node();
    first->data=10;
    first->next= NULL;
    
    //2st node
    Node* second = new Node();
    second->data=20;
    second->next= NULL;
    
    //connected 1st to 2nd
    first-> next = second;
    
    //3st node
    Node* third = new Node();
    third->data=30;
    third->next= NULL;
    
    //connected 2nd to 3rd
    second-> next = third;


    //4st node
    Node* fourth = new Node();
    fourth->data=40;
    fourth->next= NULL;
    
    //connected 3nd to 4rd
    third-> next = fourth;
    
    Node* fifth = new Node();
    fifth->data=50;
    fifth->next= NULL;
    
    //connected 3nd to 4rd
    fourth-> next = fifth;

    // deletion at a position
    int key= 40;
    Node* temp = first;
    while(temp->data != key)
        temp=temp->next;
    }
    Node* del=temp->next;
    temp->next=del->next;
    delete del;
    
    // traversal
    temp = first;
    
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }

}