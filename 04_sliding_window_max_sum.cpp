// Sliding window
#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int k=3;
    int sum;
    int maxSum;
    
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    maxSum=sum;
    
    for(int i=k;i<n;i++){
        sum += arr[i];
        sum -=arr[i-k];
        
        if(sum>maxSum){
            maxSum=sum;
        }
        
    }
    
    cout<<maxSum;
    
    return 0;
}