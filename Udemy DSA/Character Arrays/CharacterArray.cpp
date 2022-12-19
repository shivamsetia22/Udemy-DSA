#include<iostream>
using namespace std;

// int length(char input()){
//     int count = 0;
//     for(int i=0;input[i] !='\0';i++){
//         count ++;
//     }
//     return count;
// }

int main(){

    string name[100];
    cout<<"Enter your name: ";
    cin>>name;

    // name[4] = 'x';
    cout<<"Your name is "<<name<<endl;

    cout<<"Length: "<<name.length();

    return 0;
}