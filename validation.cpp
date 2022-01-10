#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the two numbers to divide"<<endl;
    cin>>a>>b;

    if(b==0)
    {
        cout<<"invalid denominator"<<endl;
    }
    else
    {
        c = a/b;
        cout<<"a/b = "<<" "<<c;
    }
    return 0;

}