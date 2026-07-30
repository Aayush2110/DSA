#include<iostream>
using namespace std;

class student{
    private:
     int id;
     string name;

     public:

     student(int id, string name){
        this->id=id;
        this->name=name;
     }
     void display(){
        cout<<id<<" "<<name<<endl;
     }
     ~student(){
        cout<<"Destructor called for student: "<<name<<endl;
     }

};

int main(){
    student s1(101,"Amit");
    student s2(102,"Ashish");
    s1.display();
    s2.display();


}