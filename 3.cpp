// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int prefix[10];
    prefix[0]=arr[0];
    
    for(int i=1; i<10;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0; i<10;i++){
        cout<<prefix[i]<<" ";
    }
    
    //------------------range-----------------
    int l;
    int r;
    cout<< "lower limit";
    cin>> l;
    cout<<"upper limit";
    cin>>r;
    if(l==0){
        cout<< prefix[r];
    }
    else{
        int sum= prefix[r]-prefix[l-1];
        cout<<sum;
    }

}