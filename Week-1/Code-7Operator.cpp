// Use of Scope resolution operator ( :: )-

#include<iostream>
using namespace std;

int a=4;

int main(){
    int a=3;
    {
        int k=a;
        int a=2;
        cout << k << endl;
        cout << a << endl;
        cout << ::a << endl;
    }
    cout << a << endl;
    cout << ::a << endl;
    return 0;
}

