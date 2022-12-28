#include<iostream>
using namespace std;

class Student {

    int age;
    
    public:
    int rollNumber;

    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }
};

int main(){

    Student s1,s2;

    s1.display();
    s2.display();

    cout<<"S1 age : "<<s1.getAge()<<endl;
    cout<<"S1 age : "<<s2.getAge()<<endl;

}