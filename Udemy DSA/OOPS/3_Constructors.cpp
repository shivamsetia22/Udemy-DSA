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

    Student *s3 = new Student;
    s3->display();

    Student s4(10);
    s4.display();


    return 0;
}