// Using the concept of class in c++ program-


#include<iostream>

using namespace std;

class student{

    char name[15];
    int age;
    float marks;

    public:
    void getdata(void);
    void print(void);
};

void student :: getdata(void){
    cout << "Enter the name=";
    cin >> name;

    cout << "Enter the age=";
    cin >> age ;

    cout << "Enter the marks=";
    cin >> marks;

}

void student :: print(void)
{
    cout << "Name=" << name << endl ;
    cout << "Age=" << age << endl ;
    cout << "Marks=" << marks << endl ;
}

int main(){
    student s1;
    s1.getdata();
    s1.print();

    return 0;
}
