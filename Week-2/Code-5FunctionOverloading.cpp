/*
Computing the area of triangle, square, rectangle and cirlce using the concept of function overloading.
*/
#include<iostream>
#include<string>
using namespace std;

float Area(float,float);
int Area(int, int);
int Area(int);
float Area(float);
    int Area(int l, int b)
    {
        int area;
        area=l*b;
        return area;
    }

    int Area(int a)
    {
        int area;
        area=a*a;
        return area;
    }

    float Area(float b, float h)
    {
        float area;
        area=b*h*0.5;
        return area;
    }

    float Area(float r)
    {
        float area;
        area=3.14*r*r;
        return area;
    }

int main(){
    string shape;
    cout << "Enter the shape whose area to be calculated = ";
    cin >> shape;
    if(shape=="Rectangle"||shape=="rectangle")
    {
        int l,b;
        cout << "\nEnter the length: ";
        cin >> l;
        cout << "\nEnter the breadth: ";
        cin >> b;
        cout << "\nThe area of " << shape << " is " << Area(l,b);
    }
    else if(shape=="Triangle"||shape=="triangle")
    {
        float b,h;
        cout << "\nEnter the base: ";
        cin >> b;
        cout << "\nEnter the height: ";
        cin >> h;
        cout << "\nThe area of " << shape << " is " << Area(b,h);
    }
    else if(shape=="Square"||shape=="square")
    {
        int s;
        cout << "\nEnter the side: ";
        cin >> s;
        cout << "\nThe area of " << shape << " is " << Area(s);
    }
    else if(shape=="Circle"||shape=="circle")
    {
        float r;
        cout << "\nEnter the radius: ";
        cin >> r;
        cout << "\nThe area of " << shape << " is " << Area(r);
    }
}