#include<iostream>
using namespace std;
int main(){

    int a[100][100];
    int m,n;
    cin>>m>>n;

    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    // Rowwise
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // Colwise
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}