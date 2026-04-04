#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3, 1, 2};
    int st[10];
    int top = -1;

    for(int i = 0; i < 3; i++) {
        while(top != -1 && arr[i] > arr[st[top]]) {
            top--;
        }
        st[++top] = i;
    }

    for(int i = 0; i <= top; i++) {
        cout << arr[st[i]] << " ";
    }

}