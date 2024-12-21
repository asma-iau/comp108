#include <iostream>
using namespace std;

void swap(int &x, int &y){

    int temp =x;
    x = y;
    y = temp;
}

int main(){
    int x = 10, y = 5;
    cout<<"X: "<<x<<" Y: "<<y;
    swap (x , y);
    cout<<"\nx: "<<x<<" y: "<< y;
}