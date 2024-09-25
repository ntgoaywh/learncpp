#include<iostream>
using namespace std;
int dist,yd;
int covt(int dist);
int main()
{
    cout <<"Please input the distance in long: ";
    cin >> dist;
    yd = covt(dist);
    cout <<"The distance is "<< yd <<" yards"<<endl;
    return 0;
}

int covt(int dist)
{
    return yd = 220*dist;
}