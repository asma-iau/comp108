#include <iostream>
using namespace std;


void swap1(int &a, int &b);

int main(){
int x,y;

    cout << "Enter two numbers: ";
    cin>> x >> y;
    cout<<"before swapping\nfirst number: "<<x<<" second number: "<<y<<endl;
    swap1(x,y);
    cout<<"after swapping\nfirst number: "<<x<<" second number: "<<y<<endl;
}

void swap1(int &a, int &b){
    int temp;
    temp= a;
    a= b;
    b= temp;
}