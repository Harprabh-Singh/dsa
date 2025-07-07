#include <iostream>
using namespace std;

struct student{
    int id;
    string name;
    float marks;
};

int main(){
    student s1={101,"Kunal",0};
    cout<<"ID: "<<s1.id<<endl;
    cout<<"NAME: "<<s1.name<<endl;
    cout<<"MARKS: "<<s1.marks<<endl;
}
