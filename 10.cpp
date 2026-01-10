// TRANSPOSE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows = 2, cols = 3;
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int trans[3][2];
    
    
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }


    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            trans[j][i]=mat[i][j];
        }
    }
    cout<<endl<< "transpose"<<endl<<endl;
    rows = 3;
    cols = 2;
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            cout<<trans[i][j];
        }
        cout<<endl;
    }

}