#include<iostream>
using namespace std;
int cvt(int age);
int main()
{
    int age;
    cout <<"Enter your age: ";
    cin >> age;
    int months = cvt(age);
    cout <<"Your age in months is "<< months<<"." <<endl;
    return 0;
}

int cvt(int age)
{
    int months = 12 * age;
    return months;
}
