#include<iostream>
using namespace std;

// class Product{
//     int id;
//     int weight;
//     char name[50];
// };

class Student{
    public:
    int rollNumber;
    int age;

};

int main(){

    Student s1;
    Student s2;
    Student s3,s4,s5;

    Student *s6 = new Student;

    s1.age = 24;
    s1.rollNumber = 100;

    cout<<s1.age<<endl;
    cout<<s1.rollNumber<<endl;

    (*s6).age = 23;
    (*s6).rollNumber = 30;

    s6->age = 23;
    s6->rollNumber = 3;
    cout<<s6->age<<endl;

return 0;
}