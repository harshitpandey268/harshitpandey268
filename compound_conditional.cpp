#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:- "<<"  " <<endl;
    cin>>age;
    if(age>=18 && age<=60)
    {
        cout<<"You are too young."<<endl;
        cout<<"NOT ELIGIBLE FOR OFFER"<<endl;

    }
    else
    {
        cout<<"NOT YOUNG"<<endl;
    }
    if(age<12 || age >60)
    {
        cout<<"Congrats you are eligible for the OFFER"<<endl;
    }
    else
    {
        cout<<"Not eligible for offer"<<endl;
    }
    return 0;

}