#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    cout<<"before swapping"<<endl;
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;


    // int temp =a;
    // a=b;
    // b=temp;

    swap(a,b);

    cout<<"after swapping"<<endl;
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;

    return 0;
}