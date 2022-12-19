#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int a[10];
    a[0] = 2;
    a[4] = 5;

    // cout<<a[0]<<" "<<a[4]<<endl;
    
    // int a[10] = {1,2,3,4};
    // // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl; 

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }

    // int a[10];
    // for (int i=0;i<10;i++){
    //     a[i]=i*i;
    //     cout<<a[i]<<" ";
    // }
    // cout<<sizeof(a);

    // int n;
    // cin>>n;

    // int a[n];
    // for (int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // int sum = 0;
    // for(int i=0;i<n;i++){
    //     sum += a[i];
    // }
    // cout<<sum<<endl;

    // int n;
    // cin>>n;

    // int a[n];
    // for (int i=0;i<n;i++){
    //     cin>>a[i];
    // }

    // // int largest = INT_MIN;
    // int largest = a[0];
    // // int smallest = INT_MAX;
    // int smallest = a[0];
    // for(int i=0;i<n;i++){
    //     if (a[i] > largest){
    //         largest = a[i];
    //     }
    
    //     if(a[i]<smallest){
    //         smallest=a[i];
    //     }
    // }
    // cout<<"largest value = "<<largest<<endl;
    // cout<<"smallest value = "<<smallest<<endl;
    
    return 0;
}