#include<bits/stdc++.h>
using namespace std;

// non-parameterised
void printNoName(){
    cout << "hey NoName";
    cout << endl;
}

// parameterised
void printName(string name){
    cout << "hey" << name;
    cout << endl;
}

// return
int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}

// pass by value
void doSomething(int num){
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by reference
void changeString(string &s){
    s[0] = 't';
    cout << s << endl;
}


// ---------------------------------------------------------------------------------------

int main(){
// non-parameterised
    printNoName();

// parameterised
    string name;
    cin >> name; 
    printName(name);
    

    string name2;
    cin >> name2;
    printName(name2);

// return 
    int num1, num2;
    cout << "enter 2 numbers";
    cin >> num1 >> num2;
    int res = sum(num1,num2);
    cout << res;
    

// Pass by Value  
// a copy of value of variable will go and not the whole variable will go and get modified
    int num = 10;
    doSomething(num);
    cout << num << endl;

// Pass by reference
// the original is send to the function and the values of the variable is changed
    string s ="dhruv";
    changeString(s);
    cout << s << endl;






    return 0;
}