//Finding second largest number in array-
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cout << "Enter the size of array";
    cin >> a;
    vector<int> arr(a);

    for(int i=0 ; i<a ; i++)
    {
        cin >> arr[i];
    }

    int max1 , max2;
    max1 = arr[0];
    max2 = arr[1];
    if(max1 < max2)
    {
        int b = max1;
        max1 = max2;
        max2 = b;
    }

    for(int i=2 ; i<a ; i++)
    {
        if(max1 < arr[i])
        {
            int temp = max1;
            max1 = arr[i];
            max2 = temp;
        }
        else if(max1 > arr[i] && max2 < arr[i])
        {
            max2=arr[i];
        }

    }
    cout << "First largest number is  " << max1 << endl;
    cout << "Second largest number is  " << max2;
}