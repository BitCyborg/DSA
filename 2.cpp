// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int low =0;
    int high=9;
    int target;
    cout<< "target num";
    cin >> target;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]==target){
            cout<<"found at"<< mid<< "index"<< endl;
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
}