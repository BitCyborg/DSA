#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1d Array
    int arr[5]={1,2,3,4,5};
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=10;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
    cout<<endl;

    // 2d Array
    int array[5][5];
    
    // STRING
    string s= "dhruv";
    cout<<s<<endl;
    cout<<s[3];
    int len = s.size();
    s[len-1] = 'z';
    cout<<endl;
    cout<<s;
    return 0;
}