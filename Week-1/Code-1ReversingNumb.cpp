//Reverse the number taken from the user and print on screen-

#include<iostream>
using namespace std;

int main(){
    int a,i,count=0;
    cout << "Enter the number ";
    cin >> a;
    i=a;

    while(i!=0){
        i=i/10;
        count++;
    }

    
    int x,y=0;

    for(int i=0;i<count;i++){
        x=a%10;
        y=y*10+x;
        a=a/10;
    }
    cout << "The reverse of the number is " << y;
}