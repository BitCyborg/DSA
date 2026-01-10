// PALINDROME CHECK
#include <iostream>
using namespace std;

int main() {
    
    char arr[5]={'N','A','M','z','N'};
    int l=0;
    int r=4;
    while(l<=r){
        if(arr[l]!=arr[r]){
            cout<< "its not a palindrome";
            return 0;
        }
        l++;
        r--;
    }
    cout<< "its a palindrome";
    return 0;
}