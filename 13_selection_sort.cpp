//      INSERTION SORT

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5] = {3,1,2,5,4};
    int n=5;
    for(int i=0;i<n;i++){
        int si=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[si])
            si=j;
        }
        swap(arr[i],arr[si]);
    }
    for(int v=0;v<n;v++){
        cout<<arr[v]<<" ";
    }
}