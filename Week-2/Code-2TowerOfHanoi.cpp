// Program for Tower Of Hanoi -
/*
Where T1, T2, T3 are towers and T1 is the source, T2 is the helper and T3 is the destination.
*/

#include<iostream>
using namespace std;

void TOH(int d, char T1, char T2, char T3)
{
    if(d==1)
    {
        cout << "\nShift disk 1 from " << T1 << " to " << T3 << endl;
        return;
    }
    TOH(d-1,T1,T3,T2);
    cout <<  "\nShift disk " << d << " from " << T1 << " to " << T3 << endl;

    TOH(d-1,T2,T1,T3);
}

int main(){
    int d;
    cout << "Enter the number of disk=";
    cin >> d;

    if(d<1)
    cout << "No disk found";

    else
    TOH(d, 'A', 'B', 'C');

    return 0;

}