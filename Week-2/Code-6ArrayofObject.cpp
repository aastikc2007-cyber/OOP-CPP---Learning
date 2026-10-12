// Concept - Array Of Object
#include<iostream>
using namespace std;

class employee{
    char name[15];
    int age;

    public:
    void getdata(void);
    void putdata(void);
};
void employee :: getdata(void)
{
    cout << "Enter the name :" ;
    cin >> name;

    cout << "Enter the age :";
    cin >> age;
}
void employee :: putdata(void)
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;

}
const int size=4;
int main(){

    employee manager[size];

    for(int i=0 ; i < size ; i++)
    {
        cout << "Information of manager " << i+1 << endl;
        manager[i].getdata();
    }

    for(int i=0; i < size ; i++)
    {
        cout << "Manager " << i+1 << endl;
        manager[i].putdata();
    }
    return 0;
}