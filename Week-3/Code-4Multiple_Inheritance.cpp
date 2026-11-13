// Multiple Inheritance
#include<iostream>
using namespace std;

class student{                                           // First Base class
    protected:
    int roll_number;

    public:
    void get_rnumb(int a)
    {
        roll_number=a;
    }
    void show_rnumb(void)
    {
        cout << "Roll number =" << endl;
    }
};

class test_marks{                                        // Second Base class
    protected:
    float sub1,sub2;

    public:
    void get_marks(float a,float b)
    {
        sub1=a;
        sub2=b;
    }
    void show_marks(void)
    {
        cout << "Marks of subject 1= " << sub1 << endl;
        cout << "Marks of subject 2= " << sub2 << endl;
    }
};

class result : public student , public test_marks{         // Multiple inherited child class
    float total;

    public:
    void display(void);
};

void result :: display()
    {
        total=sub1+sub2;
        show_rnumb();
        show_marks();
        cout << "Total marks=" << total ;
    }

int main(){
    result r;
    r.get_rnumb(1);
    r.get_marks(99.5,90);
    r.display();

    return 0;
}