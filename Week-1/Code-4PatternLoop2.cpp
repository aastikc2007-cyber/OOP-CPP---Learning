/*
To print the following pattern with number of rows to be entered by user -

if n=4;   

1
01
101
0101

*/

#include<iostream>
using namespace std;

int main(){
    int n=4;

    cout << "Enter the number of rows" << endl;
    cin >> n;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i+1 ; j++)
        {
            cout << (i+j+1)%2;
        }
        cout << endl;
    }
}