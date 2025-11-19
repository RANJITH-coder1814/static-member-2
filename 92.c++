#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    static int addno;
    student(string n){
        addno++;
        roll=addno;
        name=n;
    }
    void display(){
        cout<<"Name"<< name<<endl<<"rollno"<< roll<<endl;
    }
};
int student:: addno=0;
int main(){
   student s1("ranjith");
   student s2("vishal");
   student s3("lohith");
   student s4("manoj");
    s1.display();
    s4.display();
    cout<<"Admission no"<<student::addno<<endl;
}