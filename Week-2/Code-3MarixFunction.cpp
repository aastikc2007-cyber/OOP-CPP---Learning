#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> B, int a, int b)
{
    for(int p=0;p<a;p++)
    {
        for(int q=0;q<b;q++)
        {
            cout << B[p][q] << " ";
        }
        cout << endl;
    }
}

int main(){
    int m,n;
    cout << "Enter the size of matrix= ";
    cin >> m >> n;

    vector<vector<int>> A(m,vector<int>(n));
    cout << "Enter the elements of Matrix= ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "The matrix is " << endl;
    display(A,m,n);
    return 0;
}