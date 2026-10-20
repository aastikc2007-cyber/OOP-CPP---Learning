// Use of Parameterized Constructor:

#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(int a, int b){                         // Constructor-1
        x=a;
        y=b;
    }
    void display(){
        cout << "x= " << x << " , " << "y= " << y << endl;
    }

};
int main(){
    point p1(1,2);                              //Object p1 of class point
    point p2(10,50);                            //object p2 of class point

    p1.display();                               // Calling member function of class point through object 1
    p2.display();                               // Calling member function of class point through object 2
    return 0;
}