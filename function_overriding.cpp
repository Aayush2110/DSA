#include<iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"base class"<<endl;
    
    }
    ~base(){
        cout<<"Destructor of base class"<<endl;
    }
};

class derived:public base{
    public:
    void display() override{
        cout<<"derived class"<<endl;
    }
    ~derived(){
        cout<<"Destructor of derived class"<<endl;
    }
};
int main(){

    base *b;
    derived d;
    b=&d;
    b->display();

    return 0;
}