// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int arr [5]= {1,2,3,4,5};
    // -----------0-1-2-3-4
    int n=4;
    int newind= 2;
    int newvalue = 9;
    for (int i=n; i>newind ;i--){
        arr [i]= arr [i-1]; 
    }
    arr [newind]= newvalue;
    
    for (int j=0; j<=n; j++){
        cout<< arr[j];
    }
    cout<< endl<<endl;
    
    for(int i=newind; i<=n;i++ ){
        arr[i]=arr[i+1];
    }
    arr[4]=5;
    
    // traversal
    
    for (int j=0; j<=n; j++){
        cout<< arr[j];
    }
    cout<<endl;
    int key;
    cout<< "want to search so enter value:";
    cin>>key;
    
    for (int j=0; j<=n; j++){
        if(arr[j]==key){
            cout<<"found at element"<<" "<<j<<endl;
        }
        else{
            cout<< "didnt found in element"<<j<<" "<< endl;
        }
    }
    
    
    return 0;
}