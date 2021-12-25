// #include<iostream>
// using namespace std;

// int main(){

//     // int a, b, c ;
//     // cout<<"Enter the 3 number:\n";

//     // cin>>a;
//     // cin>>b;
//     // cin>>c;

//     // if(a>b){
//     //     if(a>c){
//     //         cout<<a<<endl;
//     //     }
//     //     else{

//     //         cout<<c<<endl;
//     //     }
//     //     }
//     //     else{
//     //         if(b>c){
//     //             cout<<b<<endl;
//     //         }
//     //         else{
//     //             cout<<c<<endl;
//     //         }
//     //     }
//     // int age;

//     // cout<<"Enter your age:\n";
//     // cin>>age;
//     // if (age<18){
//     //     cout<<"You are not eligible for vote"<<endl;
//     //     }
//     //     else if(age == 18){
//     //         cout<<"You can vote"<<endl;
//     //         }
//     //         else{
//     //             cout<<"you should vote"<<endl;
//     //         }

//     // int i=0;
//     // while(i<=40){
//     //     cout<<i<<endl;
//     //     i++;
//     // }
// return 0;

// }

#include <iostream>

int sum_of_two_digits(int first_digit, int second_digit) {
    return first_digit + second_digit;
}

int main() {
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    std::cout << sum_of_two_digits(a, b);
    return 0;
}