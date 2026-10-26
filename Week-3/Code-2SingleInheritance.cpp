// Single Inheritance -
#include<iostream>
using namespace std;

class Base{                                 // Base class = Base
    int a;
    public:
    int b;
    void set_ab();
    int get_a();
    void show_a();
};
class Derived : public Base{                 // Subclass/Derived class = Derived 
    int c;                                   // Visibility = Public
    public:
    void mul();
    void display();
};

void Base :: set_ab(){                       //Defination of function set_ab() of class Base.
    a=10;
    b=20;
}

int Base :: get_a(){                        //Defination of function get_a() of class Base.
    return a;
}

void Base :: show_a(){                       //Defination of function show_a() of class Base.
    cout << "a= "<< a << endl;
}

void Derived :: mul(){                        //Defination of function mul() of class Derived.
    c=b*get_a();
}

void Derived :: display(){                    //Defination of function display() of class Derived.
    cout << "a= " << get_a() << endl;
    cout << "b= " << b << endl;
    cout << "c= " << c << endl;
}
int main(){
    Derived d;                               //Object of Derived class.

    d.set_ab();
    d.mul();
    d.show_a();
    d.display();
    
    return 0;
}