// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[6]={10,20,30,40,50,60};
    int l=0;
    int n=6;
    int maxL=0;
    int sum=0;
    int target;
    cout<<"enter target:";
    cin>>target;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        while(sum>target){
            sum-=arr[l];
            l++;
        }
        maxL=max(maxL, r-l+1);
    }
    cout<<maxL;
    

    return 0;
}