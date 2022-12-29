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

    // Student s1,s2;

    // s1.display();
    // s2.display();

    // Student *s3 = new Student;
    // s3->display();

    // Student s4(10);
    // s4.display();

    // Student s6(10,100);
    // s6.display();

    Student s1(10,100);
    cout<<"Address of s1 "<<&s1<<endl;

    


    return 0;
}