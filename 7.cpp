//2 POINTER

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[6] = {1, 3, 4, 6, 8, 10};
    int l=0;
    int r=5;
    int sum;
    int key;
    cout<<"enter key:";
    cin>>key;
    bool value=false;
    for (int i=0; i<6;i++){
        sum=arr[l]+arr[r];

        if(sum==key){
            value=true;
            break;
        }
        else if(sum<key){
            l++;
        }
        else{
            r++;
        }
 
    }

    if(value){
        cout<<"found a pair"<<endl;
    }
    else{
        cout<<"not found";
    }
    return 0;
}