//multiplication of two square matrix
#include <iostream>
using namespace std;

int main(){
    int r, c, i, j, a[100][100], b[100][100], d[100][100];
    cout<<"Enter the number of row you want in the matix: ";
    cin>>r;
    cout<<"Enter the number of column you want in the matix: ";
    cin>>c;
    for (i = 0 ; i < r; ++i){
        for(j = 0; j < c; ++j){
            cout<<"Enter the value of a"<<i+1<<j+1<<" : ";
            cin>>a[i][j];
        }
        cout<<endl;
    }

    for (i = 0 ; i < r; ++i){
        for(j = 0; j < c; ++j){
            cout<<"Enter the value of b"<<i+1<<j+1<<" : ";
            cin>>b[i][j];
        }
        cout<<endl;
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            d[i][j] = 0;
            for (int k = 0; k < r; k++) {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    cout<<"The multiplication of above given two matrices is "<<enl;
    
    for (i = 0 ; i < r; ++i){
        for(j = 0; j < c; ++j){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
