// Overloading of constructor and dynamic intialization of object.
#include<iostream>
using namespace std;

class Fixed_deposit{
    long int p_amount;                        //Principle amount
    int years;
    float Rate;
    float R_value;                             //Return value of amount
    public:
    Fixed_deposit(){}
    Fixed_deposit(long int p,int y,float r=0.12);
    Fixed_deposit(long int p,int y,int r);
    
    void display(void);
};

Fixed_deposit :: Fixed_deposit(long int p, int y, float r)
{
    p_amount = p;
    years = y;
    Rate = r;
    R_value = p_amount;
    for(int i=1;i<=y;i++)
    R_value = R_value*(1.0 + r);
}

Fixed_deposit :: Fixed_deposit(long int p, int y, int r)
{
    p_amount = p;
    years = y;
    Rate = r;
    R_value = p_amount;
    for(int i=1;i<=y;i++)
    R_value = R_value*(1.0 + float(r)/100);
}

void Fixed_deposit :: display(void){
    cout << endl << "Principle amount = " << p_amount << endl << "Return value of amount = " << R_value << endl;
}

int main(){
    Fixed_deposit F1,F2,F3;

    long int p;

    int y,R;
    float r;

    cout << "Enter the amount , years and interest = ";
    cin >> p >> y >> R;
    F1 = Fixed_deposit(p,y,R);

    cout << "Enter the amount , years and interest = ";
    cin >> p >> y >> r;
    F2 = Fixed_deposit(p,y,r);


    cout << "Enter the amount , years = ";
    cin >> p >> y;
    F3 = Fixed_deposit(p,y);

    F1.display();
    F2.display();
    F3.display();
    
    return 0;
}