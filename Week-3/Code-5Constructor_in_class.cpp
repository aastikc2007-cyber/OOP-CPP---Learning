// Constructor in derived class 
#include<iostream>
using namespace std;

class A{                                                    //Base class A
    int x;
    public:
    A(int a)                                               //Constructor A to initialize x
    {
        x=a;
    }
    void show_x(void)
    {
        cout << "x = " << x << endl;
    }
};
 
class B{                                                    // Base class B
    float y;
    public:
    B(float b)                                              // Constructor B to initialize y
    {
        y=b;
    }
    void show_y(void)
    {
        cout << "y = " << y << endl;
    }
};

class C : public B, public A{                                // Multiple inherited child class C
    int c,d;
    public:
    C(int p,float q,int r,int s):A(p),B(q)                    // Constructor C to pass argument for initializing x,y,c,d.
    {
        c=r;
        d=s;
    }
    void show_cd(void)
    {
        cout << "c = " << c << endl << "d = " << d;
    }

};

int main()
{
    C c(5,10.5,20,30);

    c.show_x();
    c.show_y();
    c.show_cd();

    return 0;
}