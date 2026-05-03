#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y;
    cin >> x >> y;
    cout << "value of x:" << x << " " << "and y:" << y ;

    // int and long and long long for numbers
    int a = 3;
    long b = 2000;
    long long c=200000;

    // int is -10^9 to 10^9
    // long is -10^12 to 10^12
    // long long is -10^18 to 10^18


    // float, double and long double for decimals
    float d = 2.13;
    double e = 4.999;
    long double f = 9999.99999;

    // string and getline
    string s1, s2;      // Hey Dhruv
    cout<< "enter line"; 
    cin >> s1 >> s2;  // to take 2 input
    cout << s1 << " " << s2 << endl;


    cin.ignore();   // clears leftover newline

    // TO TAKE WHOLE LINE WITHOUT MANY STRING VAR
    string str;
    cout<< "enter line";
    getline(cin,str);
    cout<<str;
    

    // character storing single letter or special characters
    // character to always be stored in single quotes or it is taken as strong with double quotes and gives an error
    char ch= '#';

}