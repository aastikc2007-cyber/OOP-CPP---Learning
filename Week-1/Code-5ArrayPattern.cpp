/*
To make changes in user input array such that all the zeros values comes to end of array and no zeros value at starting
of array without changing the arrangement of nonzero numbers.
Example:
a[]={0,1,2,0,3,0,4,0};

such that after making changes array look like 

a[]={1,2,3,4,0,0,0};
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;

    int n,j;
    cout << "Enter number of elements=" ;
    cin >> n;

    arr.resize(n);

    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    j=0;

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] != 0)
        {
            arr[j++] = arr[i];
        }
    }

    for(int i=j ; i<n ; i++)
    {
        arr[i]=0;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}