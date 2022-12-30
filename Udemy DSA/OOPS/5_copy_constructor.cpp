#include<iostream>
using namespace std;

class Student {

    int age;
    
    public:
    
    Student( ){
        cout<<"Constructor called"<<endl;
    }

    Student( int r){
        cout<<"Constructor 2 called"<<endl;
        rollNumber = r;
    }
    Student(int a, int r){
        cout<<"this "<<this<<endl;
        cout<<"Constructor 3 called"<<endl;
        age=a;
        rollNumber=r;
    }
    int rollNumber;

    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }
};

int main(){

    Student s1(10,100);
    cout<<"S1 "<<endl;
    s1.display();

    Student s2(10,100);
    cout<<"S2 "<<endl;
    s2.display();

    Student *s3 = new Student(20,200);
    cout<<"s3 "<<endl;
    s3->display();

    Student s4(*s3);
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

}