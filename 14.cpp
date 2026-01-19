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
    
    Node* temp = first;

    
    
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    
    
    
    
}