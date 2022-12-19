#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100] = "abcd";
    char str2[100] = "hello";

    cout<<"Before copying"<<endl;
    cout<<"str1 "<<str1<<endl;
    cout<<"str2 "<<str2<<endl;

    // strcpy(str2, str1);
    strncpy(str1, str2, 4);

    cout<<"Before copying"<<endl;
    cout<<"str1 "<<str1<<endl;
    cout<<"str2 "<<str2<<endl;
    // cin>>str1>>str2;
    // if(strcmp(str1,str2) == 0){
    //     cout<<"equal"<<endl;
    // }else{
    //     cout<<"not equal"<<endl;
    // }
    // int len = strlen(str1);
    // cout<<len<<endl;
    return 0;
}