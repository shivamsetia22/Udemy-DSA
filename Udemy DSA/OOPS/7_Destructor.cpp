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
    ~Student(){
        cout<<"Destructor called "<<endl;
    }
};

int main(){

    Student s1(10,100);
    Student s2(20,200);
    Student *s3 = new Student(30,300);

    s2 = s1;
    *s3 = s1;
    s2 = *s3;

    delete s3;
    

    return 0;
}