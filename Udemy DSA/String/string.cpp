// #include<iostream>
// #include<vector>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abc";
    cout<<s<<endl;

    string *sp = new string;
    *sp = "mno";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    string s2 = "def";

    vector<string> v;
    v.push_back(s);
    v.push_back("hello");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl;

    }

    string s3;
    // getline(cin, s3);
    s3 = "abcabc";
    cout<<s3<<endl;
    cout<<s3.size()<<endl;
    cout<<s3.length()<<endl;
    cout<<s3.substr(3)<<endl;
    cout<<s3.substr(2,5)<<endl;
    string s4 = s3 + s2 ;
    cout<<s4<<endl;
    cout<<s4.find("bcd")<<endl;

    int a = 1234;
    string s5 = to_string(a);
    cout<<s5<<endl;
    s5[1] = '4';
    cout<<s5<<endl;

    s5.push_back('5');
    a = atoi(s5.c_str());
    cout<<a<<endl;


    return 0;
}