#include<iostream>
using namespace std;

double power(double m, int n=2)  // n=2 is the default argument.
{
    if(n==0)
    return 1;

    if(n==1)
    return m;

    return m*power(m,n-1);
}

int main(){
    int n;
    long int x;
    double m;

    cout << "Enter the number = ";
    cin >> m;

    cout << "Enter the power n = ";
    cin >> n;

    x=power(m,n);
    cout << "The m raise to power n is " << x;
    return 0;
}