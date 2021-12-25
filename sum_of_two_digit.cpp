#include<iostream>
using namespace std;

int sum_of_two_number(int first_number, int second_number)
{
return first_number + second_number;
}

int main(){
    int a=0;
    int b=0;
    cin >> a;
    cin >> b;
    cout << sum_of_two_number (a, b);

    return 0;
}