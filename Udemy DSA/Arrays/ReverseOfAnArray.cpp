#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    

//     cout<<"Before reverse"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

    int s=0;
    int e=n-1;
    while(s<=e){
        swap(a[s], a[e]);

        s++;
        e--;
    }

    cout<<"After reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



    return 0;
}

// int main(){

//     int n;
//     cin>>n;
//     int a[n];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=n-1;i>=0;i--){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }

// int main(){

//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int s=0;
//     int e=n-1;
//     while(s <=e){
//         swap(a[s], a[e]);

//         s++;
//         e--;
//     }

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }