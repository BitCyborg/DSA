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
    
    
    // inserting in the start
    Node* n1 = new Node();
    n1-> data=11;
    n1-> next= first;
    first =n1;
    
    // insertion at the end
    Node* temp = first;
    while(temp-> next != NULL){
        temp=temp-> next;
    }
    
    Node* n9= new Node();
    n9->data= 99;
    n9->next= NULL;
    temp->next=n9;
    
    
    // insertion at a position
    Node* nn= new Node();
    nn->data= 15;
    nn->next= NULL;
    
    temp=first;
    int i=0;
    while (i<3){
        temp=temp->next;
        i++;
    }
    nn->next =temp->next;
    temp->next=nn;
    
    
    // traverse
    temp = first;
    
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    
    
    
    
    
    
}