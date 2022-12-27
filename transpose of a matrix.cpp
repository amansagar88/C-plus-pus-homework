//transpose of two square matrix
#include <iostream>
using namespace std;

int main(){
    int r, c, i, j, a[100][100], b[100][100];
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
            b[j][i] = a[i][j];
        }
        cout<<endl;
    }

    cout<<"The transpose of the given matrix is "<<endl;

    for (i = 0 ; i < r; ++i){
        for(j = 0; j < c; ++j){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
