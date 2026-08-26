/*
To print the following pattern with number of rows to be entered by user -
 
if n=4;   
1010101
101010
10101
1010
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows for the pattern: ";
    cin >> n;
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1 ; j < 2*n ; j++)
        {
            cout << ( i + j ) % 2;
        }
        cout << endl;
    }
    
}