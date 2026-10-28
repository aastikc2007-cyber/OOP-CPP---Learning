// Multilevel Inheritance -
#include<iostream>
using namespace std;

class student{                                                 // Base class 
    protected:
    int roll_number;
    public:
    void get_rnumber(int x)
    {
        roll_number=x;
    }
    void put_rnumber(void)
    {
        cout << "Roll Number = "<< roll_number << endl;
    }
};

class test : public student{                                   // First level derivation , test is the child class of student 
    protected:
    float markssub_1,markssub_2;
    public:
    void get_marks(float,float);
    void put_marks(void);
};

void test :: get_marks(float a, float b){
    markssub_1=a;
    markssub_2=b;
}

void test :: put_marks(void)
{
    cout << "Marks of subject 1 = " << markssub_1 << endl;
    cout << "Marks of subject 2 = " << markssub_2 << endl;
}

class result : public test{                                      // Second level derivation , result is the child class of test
    float total;

    public:
    void display(void);
};

void result :: display(void){
    total=markssub_1+markssub_2;

    put_rnumber();
    put_marks();
    cout << "Total = " << total;
}

int main(){
    result student1;
    
    student1.get_rnumber(10);
    student1.get_marks(90,99);
    student1.display();

    return 0;
}